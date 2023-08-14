#include "server.h"

Server::Server() {
    if(this->listen(QHostAddress::Any, 2323)) {
        qDebug() << "Start";
    }
    else {
        qDebug() << "Error";
    }
    nextBlockSize = 0;
}

void Server::incomingConnection(qintptr socketDescriptor) {
    socket = new QTcpSocket;
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, &QTcpSocket::readyRead,this, &Server::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);

    Sockets.push_back(socket);
    qDebug() << "Client connected" << socketDescriptor;
}

void Server::slotReadyRead() {
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_5_14);
    if(in.status() == QDataStream::Ok) {
        for(;;) {
            in >> nextBlockSize;
            QString str;
            in >> str;
            if(str[0] == "1") {
                str.remove(0,0);
                sendToClient("1" + str);
            }
            break;
        }
    }
    else {
        qDebug() << "DataStream error";
    }
}

void Server::sendToClient(QString str) {
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_14);
    out << quint16(8) << str;
    out.device()->seek(0);
    qDebug() << str;
    out << quint16(Data.size() - sizeof(quint16));
    for(int i = 0; i < Sockets.size(); i++) {
        Sockets[i]->write(Data);
    }
}
