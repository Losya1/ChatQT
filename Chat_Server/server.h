#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>


class Server : public QTcpServer {
    Q_OBJECT

public:
    Server();
    QTcpSocket *socket;
private:
    QVector <QTcpSocket*> Sockets;
    QByteArray Data;
    void sendToClient(QString str);
    quint16 nextBlockSize;
public slots:
    void incomingConnection(qintptr handle) override;
    void slotReadyRead();
};

#endif // SERVER_H
