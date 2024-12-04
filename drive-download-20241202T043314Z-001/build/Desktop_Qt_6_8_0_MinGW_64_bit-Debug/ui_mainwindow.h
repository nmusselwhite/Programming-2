/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QPushButton *btnOkay;
    QLineEdit *editPin;
    QLabel *labelWrong;
    QLabel *label_logo;
    QWidget *page_3;
    QPushButton *btnSide;
    QPushButton *btnDrink;
    QPushButton *btnMain;
    QPushButton *btnDone;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QPushButton *btnPizza;
    QPushButton *btnHamburger;
    QPushButton *btnBurrito;
    QPushButton *btnHotdog;
    QWidget *page_6;
    QPushButton *btnOnionRings;
    QPushButton *btnFries;
    QPushButton *btnChurro;
    QPushButton *btnChickenNuggets;
    QWidget *page;
    QPushButton *btnIcedTea;
    QPushButton *btnCoffee;
    QPushButton *btnSoda;
    QPushButton *btnLemonade;
    QListWidget *listWidget;
    QLabel *label;
    QLabel *labTotal;
    QPushButton *btnLogout;
    QPushButton *btnDelete;
    QLabel *label_3;
    QWidget *page_4;
    QLabel *label_2;
    QPushButton *btnNew;
    QLabel *label_4;
    QLabel *labelTotal2;
    QPushButton *btnBack;
    QLabel *label_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(803, 637);
        QPalette palette;
        QBrush brush(QColor(166, 166, 166, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-image: url(:/new/prefix1/Background.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
" \n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        QPalette palette1;
        QBrush brush1(QColor(20, 134, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(122, 122, 122, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        stackedWidget->setPalette(palette1);
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        btnOkay = new QPushButton(page_2);
        btnOkay->setObjectName("btnOkay");
        btnOkay->setGeometry(QRect(320, 400, 171, 61));
        QPalette palette2;
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(13, 13, 13, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        btnOkay->setPalette(palette2);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable Small")});
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(false);
        btnOkay->setFont(font);
        btnOkay->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: none;\n"
"\n"
"color: white;\n"
"background-color:rgb(13, 13, 13);\n"
"	\n"
"	font: 700 16pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(65, 65, 65);\n"
"}\n"
""));
        editPin = new QLineEdit(page_2);
        editPin->setObjectName("editPin");
        editPin->setGeometry(QRect(250, 300, 321, 51));
        editPin->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"border: none;\n"
"border-radius: 25px;\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}"));
        editPin->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelWrong = new QLabel(page_2);
        labelWrong->setObjectName("labelWrong");
        labelWrong->setGeometry(QRect(210, 250, 401, 41));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        labelWrong->setPalette(palette3);
        labelWrong->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"    color: rgb(255, 255, 255);\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}"));
        labelWrong->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_logo = new QLabel(page_2);
        label_logo->setObjectName("label_logo");
        label_logo->setGeometry(QRect(280, 0, 241, 171));
        label_logo->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"background-color:transparent;\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}"));
        label_logo->setPixmap(QPixmap(QString::fromUtf8("Store_logo.png")));
        label_logo->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        btnSide = new QPushButton(page_3);
        btnSide->setObjectName("btnSide");
        btnSide->setGeometry(QRect(470, 48, 121, 61));
        btnSide->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: none;\n"
"\n"
"color: white;\n"
"background-color:rgb(13, 13, 13);\n"
"	\n"
"	font: 700 15pt \"Segoe UI Variable Small\";\n"
"border-radius:25px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(65, 65, 65);\n"
"}\n"
""));
        btnSide->setIconSize(QSize(100, 100));
        btnDrink = new QPushButton(page_3);
        btnDrink->setObjectName("btnDrink");
        btnDrink->setGeometry(QRect(620, 48, 121, 61));
        btnDrink->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: none;\n"
"\n"
"color: white;\n"
"background-color:rgb(13, 13, 13);\n"
"	\n"
"	font: 700 15pt \"Segoe UI Variable Small\";\n"
"border-radius:25px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(65, 65, 65);\n"
"}\n"
""));
        btnMain = new QPushButton(page_3);
        btnMain->setObjectName("btnMain");
        btnMain->setGeometry(QRect(310, 48, 121, 61));
        btnMain->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: none;\n"
"border-color:blue;\n"
"color: rgb(242, 255, 244);\n"
"\n"
"background-color:rgb(13, 13, 13);\n"
"	\n"
"	font: 700 15pt \"Segoe UI Variable Small\";\n"
"border-radius:25px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(65, 65, 65);\n"
"}\n"
""));
        btnMain->setIconSize(QSize(100, 100));
        btnDone = new QPushButton(page_3);
        btnDone->setObjectName("btnDone");
        btnDone->setGeometry(QRect(670, 490, 93, 29));
        btnDone->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"background-color:rgb(255, 255, 255);\n"
"\n"
"	font: 700 10pt \"Segoe UI Variable Small\";\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(65, 65, 65);\n"
"}\n"
""));
        stackedWidget_2 = new QStackedWidget(page_3);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(310, 130, 471, 331));
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        btnPizza = new QPushButton(page_5);
        btnPizza->setObjectName("btnPizza");
        btnPizza->setGeometry(QRect(0, 0, 221, 161));
        btnPizza->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Pizza.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnPizza->setIcon(icon);
        btnPizza->setIconSize(QSize(444, 161));
        btnHamburger = new QPushButton(page_5);
        btnHamburger->setObjectName("btnHamburger");
        btnHamburger->setGeometry(QRect(240, 0, 211, 161));
        btnHamburger->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Burger.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnHamburger->setIcon(icon1);
        btnHamburger->setIconSize(QSize(175, 175));
        btnBurrito = new QPushButton(page_5);
        btnBurrito->setObjectName("btnBurrito");
        btnBurrito->setGeometry(QRect(0, 160, 211, 161));
        btnBurrito->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Burritos.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnBurrito->setIcon(icon2);
        btnBurrito->setIconSize(QSize(200, 200));
        btnHotdog = new QPushButton(page_5);
        btnHotdog->setObjectName("btnHotdog");
        btnHotdog->setGeometry(QRect(240, 160, 211, 161));
        btnHotdog->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("Hot dog.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnHotdog->setIcon(icon3);
        btnHotdog->setIconSize(QSize(200, 200));
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        btnOnionRings = new QPushButton(page_6);
        btnOnionRings->setObjectName("btnOnionRings");
        btnOnionRings->setGeometry(QRect(0, 0, 211, 161));
        btnOnionRings->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../FireShot/Onion rings.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnOnionRings->setIcon(icon4);
        btnOnionRings->setIconSize(QSize(175, 175));
        btnFries = new QPushButton(page_6);
        btnFries->setObjectName("btnFries");
        btnFries->setGeometry(QRect(240, 0, 211, 161));
        btnFries->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("Fries.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnFries->setIcon(icon5);
        btnFries->setIconSize(QSize(200, 275));
        btnChurro = new QPushButton(page_6);
        btnChurro->setObjectName("btnChurro");
        btnChurro->setGeometry(QRect(0, 160, 211, 161));
        btnChurro->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../FireShot/Churros.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnChurro->setIcon(icon6);
        btnChurro->setIconSize(QSize(165, 160));
        btnChickenNuggets = new QPushButton(page_6);
        btnChickenNuggets->setObjectName("btnChickenNuggets");
        btnChickenNuggets->setGeometry(QRect(230, 170, 211, 161));
        btnChickenNuggets->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("Chicken Nugget.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnChickenNuggets->setIcon(icon7);
        btnChickenNuggets->setIconSize(QSize(200, 200));
        btnChickenNuggets->setCheckable(false);
        btnChickenNuggets->setFlat(false);
        stackedWidget_2->addWidget(page_6);
        btnChickenNuggets->raise();
        btnOnionRings->raise();
        btnFries->raise();
        btnChurro->raise();
        page = new QWidget();
        page->setObjectName("page");
        btnIcedTea = new QPushButton(page);
        btnIcedTea->setObjectName("btnIcedTea");
        btnIcedTea->setGeometry(QRect(0, 160, 211, 161));
        btnIcedTea->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("Icetea.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnIcedTea->setIcon(icon8);
        btnIcedTea->setIconSize(QSize(211, 165));
        btnCoffee = new QPushButton(page);
        btnCoffee->setObjectName("btnCoffee");
        btnCoffee->setGeometry(QRect(240, 160, 211, 161));
        btnCoffee->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8("Coffee.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnCoffee->setIcon(icon9);
        btnCoffee->setIconSize(QSize(275, 275));
        btnSoda = new QPushButton(page);
        btnSoda->setObjectName("btnSoda");
        btnSoda->setGeometry(QRect(0, 0, 211, 161));
        btnSoda->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8("pepsi.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnSoda->setIcon(icon10);
        btnSoda->setIconSize(QSize(250, 250));
        btnLemonade = new QPushButton(page);
        btnLemonade->setObjectName("btnLemonade");
        btnLemonade->setGeometry(QRect(240, 0, 211, 161));
        btnLemonade->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"\n"
"background-color:rgb(49, 49, 49);\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8("lemon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnLemonade->setIcon(icon11);
        btnLemonade->setIconSize(QSize(260, 230));
        stackedWidget_2->addWidget(page);
        listWidget = new QListWidget(page_3);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 50, 241, 441));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget\n"
"{\n"
"border-radius:10px;\n"
"background-color:rgb(242, 255, 244);\n"
"font: 700 14pt \"Segoe UI\";\n"
"}"));
        label = new QLabel(page_3);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 500, 101, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"   color: rgb(255, 255, 255);\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}"));
        labTotal = new QLabel(page_3);
        labTotal->setObjectName("labTotal");
        labTotal->setGeometry(QRect(120, 510, 121, 31));
        labTotal->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"   color: rgb(255, 255, 255);\n"
"	font: 700 14pt \"Segoe UI\";\n"
"}"));
        btnLogout = new QPushButton(page_3);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(550, 490, 93, 29));
        btnLogout->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"background-color:rgb(255, 255, 255);\n"
"\n"
"	font: 700 10pt \"Segoe UI Variable Small\";\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(65, 65, 65);\n"
"}\n"
""));
        btnDelete = new QPushButton(page_3);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(240, 40, 21, 21));
        label_3 = new QLabel(page_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 19, 171, 21));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_2 = new QLabel(page_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 210, 401, 81));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"background-color:rgb(255, 255, 255);\n"
"\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        btnNew = new QPushButton(page_4);
        btnNew->setObjectName("btnNew");
        btnNew->setGeometry(QRect(620, 470, 111, 41));
        btnNew->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"background-color:rgb(242, 255, 244);\n"
"\n"
"	font: 700 10pt \"Segoe UI Variable Small\";\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(65, 65, 65);\n"
"}\n"
""));
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 100, 201, 91));
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: 5px solid black;\n"
"\n"
"color: black;\n"
"background-color:rgb(242, 255, 244);\n"
"\n"
"	font: 700 10pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelTotal2 = new QLabel(page_4);
        labelTotal2->setObjectName("labelTotal2");
        labelTotal2->setGeometry(QRect(340, 220, 201, 61));
        labelTotal2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border: none;\n"
"\n"
"color: black;\n"
"background-color:rgb(255, 255, 255);\n"
"\n"
"	font: 700 20pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        labelTotal2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        btnBack = new QPushButton(page_4);
        btnBack->setObjectName("btnBack");
        btnBack->setGeometry(QRect(30, 470, 131, 41));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border: 2px solid black;\n"
"\n"
"color: black;\n"
"background-color:rgb(242, 255, 244);\n"
"\n"
"	font: 700 10pt \"Segoe UI Variable Small\";\n"
"border-radius:10px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(65, 65, 65);\n"
"}\n"
""));
        label_5 = new QLabel(page_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(320, 40, 191, 61));
        label_5->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"border:transparent ;\n"
"\n"
"color: white;\n"
"background-color:transparent;\n"
"\n"
"	font: 700 15pt \"Segoe UI Variable Small\";\n"
"border-radius:30px;\n"
"}\n"
"QPushButton:Hover\n"
"{\n"
"\n"
"background-color:rgb(209, 209, 209);\n"
"}\n"
""));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(page_4);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(1);
        btnChickenNuggets->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnOkay->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        labelWrong->setText(QString());
        label_logo->setText(QString());
        btnSide->setText(QCoreApplication::translate("MainWindow", "Side", nullptr));
        btnDrink->setText(QCoreApplication::translate("MainWindow", "DRINK", nullptr));
        btnMain->setText(QCoreApplication::translate("MainWindow", "Main", nullptr));
        btnDone->setText(QCoreApplication::translate("MainWindow", "DONE", nullptr));
        btnPizza->setText(QString());
        btnHamburger->setText(QString());
        btnBurrito->setText(QString());
        btnHotdog->setText(QString());
        btnOnionRings->setText(QString());
        btnFries->setText(QString());
        btnChurro->setText(QString());
        btnChickenNuggets->setText(QString());
        btnIcedTea->setText(QString());
        btnCoffee->setText(QString());
        btnSoda->setText(QString());
        btnLemonade->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Total :", nullptr));
        labTotal->setText(QString());
        btnLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Total: ", nullptr));
        btnNew->setText(QCoreApplication::translate("MainWindow", "New Order", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Accept Payment Now", nullptr));
        labelTotal2->setText(QString());
        btnBack->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Cash only !!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
