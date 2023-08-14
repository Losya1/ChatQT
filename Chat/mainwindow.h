#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void slotReadyRead();

private slots:
    void on_LogInButton_clicked();
    void on_SendButton_clicked();
    void on_RegistrationButton_clicked();

private:
    QString Username;
    Ui::MainWindow *ui;
    QTcpSocket *socket;
    QByteArray Data;
    void sendToServer(QString str);
    quint16 nextBlockSize;
};
#endif // MAINWINDOW_H
