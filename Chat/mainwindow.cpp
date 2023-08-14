#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_registration.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
    socket->connectToHost("127.0.0.1", 2323);
    connect(socket, &QTcpSocket::readyRead,this, &MainWindow::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
    ui->RegistrationTextBrowser->append("Enter the data.");
    nextBlockSize = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_5_14);
    if(in.status() == QDataStream::Ok) {
        for(;;) {
            in >> nextBlockSize;
            QString str;
            in >> str;
            if(str[0] == "1") {
                str.remove(0,0);
                ui->MainTextBrowser->append(str);
            }
            break;
        }
    }
    else {
        ui->MainTextBrowser->append("Read error");
    }
}

void MainWindow::sendToServer(QString(str))
{
    Data.clear();
    QDataStream out(&Data, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_5_14);
    out << quint16(8) << str;
    out.device()->seek(0);
    out << quint16(Data.size() - sizeof(quint16));
    socket->write(Data);
    ui->MainEdit->clear();
}

void MainWindow::on_SendButton_clicked()
{
    QString mes = "1" + Username + " -> " + ui->MainEdit->text();
    sendToServer(mes);
}

void MainWindow::on_RegistrationButton_clicked()
{
    if(ui->UsernameEdit != nullptr && ui->PasswordEdit != nullptr) {
        QString mes = "2" + ui->UsernameEdit->text() + "|" + ui->PasswordEdit->text();
        sendToServer(mes);
    }
    else {
        ui->RegistrationTextBrowser->append("Error");
    }
}

void MainWindow::on_LogInButton_clicked()
{
    if(ui->UsernameEdit != nullptr && ui->PasswordEdit != nullptr) {
        QString mes = "3" + ui->UsernameEdit->text() + "|" + ui->PasswordEdit->text();
        sendToServer(mes);
    }
    else {
        ui->RegistrationTextBrowser->append("Error");
    }
}
