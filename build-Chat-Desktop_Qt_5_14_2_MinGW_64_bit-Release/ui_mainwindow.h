/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *UserTextBrowser;
    QPushButton *LogOutButton;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *MainTextBrowser;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *MainEdit;
    QVBoxLayout *verticalLayout_2;
    QPushButton *SendButton;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *UsernameEdit;
    QLineEdit *PasswordEdit;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *RegistrationTextBrowser;
    QPushButton *LogInButton;
    QPushButton *RegistrationButton;
    QFrame *line_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(450, 530);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Georgia"));
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setKerning(true);
        label_2->setFont(font);

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        UserTextBrowser = new QTextBrowser(centralwidget);
        UserTextBrowser->setObjectName(QString::fromUtf8("UserTextBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserTextBrowser->sizePolicy().hasHeightForWidth());
        UserTextBrowser->setSizePolicy(sizePolicy);
        UserTextBrowser->setMinimumSize(QSize(150, 30));
        UserTextBrowser->setMaximumSize(QSize(150, 16777215));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        UserTextBrowser->setFont(font1);

        horizontalLayout_3->addWidget(UserTextBrowser);

        LogOutButton = new QPushButton(centralwidget);
        LogOutButton->setObjectName(QString::fromUtf8("LogOutButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LogOutButton->sizePolicy().hasHeightForWidth());
        LogOutButton->setSizePolicy(sizePolicy1);
        LogOutButton->setMinimumSize(QSize(0, 30));
        LogOutButton->setMaximumSize(QSize(80, 30));
        QFont font2;
        font2.setPointSize(12);
        LogOutButton->setFont(font2);

        horizontalLayout_3->addWidget(LogOutButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        MainTextBrowser = new QTextBrowser(centralwidget);
        MainTextBrowser->setObjectName(QString::fromUtf8("MainTextBrowser"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MainTextBrowser->sizePolicy().hasHeightForWidth());
        MainTextBrowser->setSizePolicy(sizePolicy2);
        MainTextBrowser->setMinimumSize(QSize(430, 200));
        MainTextBrowser->setFont(font2);

        horizontalLayout_2->addWidget(MainTextBrowser);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(16);
        label->setFont(font3);

        horizontalLayout->addWidget(label);

        MainEdit = new QLineEdit(centralwidget);
        MainEdit->setObjectName(QString::fromUtf8("MainEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(MainEdit->sizePolicy().hasHeightForWidth());
        MainEdit->setSizePolicy(sizePolicy3);
        MainEdit->setMinimumSize(QSize(0, 30));
        QFont font4;
        font4.setPointSize(10);
        MainEdit->setFont(font4);

        horizontalLayout->addWidget(MainEdit);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        SendButton = new QPushButton(centralwidget);
        SendButton->setObjectName(QString::fromUtf8("SendButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(SendButton->sizePolicy().hasHeightForWidth());
        SendButton->setSizePolicy(sizePolicy4);
        SendButton->setMinimumSize(QSize(80, 40));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font5.setPointSize(16);
        SendButton->setFont(font5);

        verticalLayout_2->addWidget(SendButton);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        UsernameEdit = new QLineEdit(centralwidget);
        UsernameEdit->setObjectName(QString::fromUtf8("UsernameEdit"));
        QFont font6;
        font6.setPointSize(14);
        UsernameEdit->setFont(font6);

        gridLayout->addWidget(UsernameEdit, 0, 1, 1, 1);

        PasswordEdit = new QLineEdit(centralwidget);
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));
        PasswordEdit->setFont(font6);

        gridLayout->addWidget(PasswordEdit, 1, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        RegistrationTextBrowser = new QTextBrowser(centralwidget);
        RegistrationTextBrowser->setObjectName(QString::fromUtf8("RegistrationTextBrowser"));
        sizePolicy3.setHeightForWidth(RegistrationTextBrowser->sizePolicy().hasHeightForWidth());
        RegistrationTextBrowser->setSizePolicy(sizePolicy3);
        RegistrationTextBrowser->setMinimumSize(QSize(0, 30));
        RegistrationTextBrowser->setMaximumSize(QSize(16777215, 30));
        RegistrationTextBrowser->setFont(font2);

        horizontalLayout_4->addWidget(RegistrationTextBrowser);

        LogInButton = new QPushButton(centralwidget);
        LogInButton->setObjectName(QString::fromUtf8("LogInButton"));
        sizePolicy1.setHeightForWidth(LogInButton->sizePolicy().hasHeightForWidth());
        LogInButton->setSizePolicy(sizePolicy1);
        LogInButton->setMinimumSize(QSize(100, 30));
        LogInButton->setMaximumSize(QSize(100, 30));
        LogInButton->setFont(font2);

        horizontalLayout_4->addWidget(LogInButton);

        RegistrationButton = new QPushButton(centralwidget);
        RegistrationButton->setObjectName(QString::fromUtf8("RegistrationButton"));
        sizePolicy1.setHeightForWidth(RegistrationButton->sizePolicy().hasHeightForWidth());
        RegistrationButton->setSizePolicy(sizePolicy1);
        RegistrationButton->setMinimumSize(QSize(100, 30));
        RegistrationButton->setMaximumSize(QSize(100, 30));
        RegistrationButton->setFont(font2);

        horizontalLayout_4->addWidget(RegistrationButton);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_5);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Chat", nullptr));
        LogOutButton->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\342\226\272", nullptr));
        SendButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        LogInButton->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        RegistrationButton->setText(QCoreApplication::translate("MainWindow", "Registration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
