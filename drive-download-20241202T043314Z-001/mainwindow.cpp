#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QApplication>
#include <vector>
#include <string>
#include <Qstring>
#include <QListWidgetItem>
#include <QPixmap>
#include <QIcon>
#include <QMap>
#include <QFile>

using namespace std;

QMap<QString, QString> employees; //PIN/NAME

//SAVES EMPLOYEES TO COMPUTER

void saveEmployeesToFile() {
    QFile file("employees.txt");
    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);
        for (auto it = employees.begin(); it != employees.end(); ++it) {
            out << it.key() << "," << it.value() << "\n";
        }
        file.close();
    }
}

//LOADS EMPLOYEE

void loadEmployeesFromFile(Ui::MainWindow* ui) {
    QFile file("employees.txt");
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList parts = line.split(",");
            if (parts.size() == 2) {
                employees.insert(parts[0], parts[1]);
                ui->listEmployeeDisplay->addItem(parts[1] + " (PIN: " + parts[0] + ")");
            }
        }
        file.close();
    }
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    //IMAGES USED

    loadEmployeesFromFile(ui);
    ui->btnChickenNuggets->setIcon(QIcon(":/new/prefix1/Chicken Nugget.png"));
    ui->btnChurro->setIcon(QIcon(":/new/prefix1/Churros.png"));
    ui->btnPizza->setIcon(QIcon(":/new/prefix1/Pizza.png"));
    ui->btnOnionRings->setIcon(QIcon(":/new/prefix1/Onion rings.png"));
    ui->btnFries->setIcon(QIcon(":/new/prefix1/Fries.png"));
    ui->btnHamburger->setIcon(QIcon(":/new/prefix1/Burger.png"));
    ui->btnHotdog->setIcon(QIcon(":/new/prefix1/Hot dog.png"));
    ui->btnCoffee->setIcon(QIcon(":/new/prefix1/Coffee.png"));
    ui->btnLemonade->setIcon(QIcon(":/new/prefix1/lemon.png"));
    ui->btnSoda->setIcon(QIcon(":/new/prefix1/pepsi.png"));
    ui->btnBurrito->setIcon(QIcon(":/new/prefix1/Burritos.png"));
    ui->btnIcedTea->setIcon(QIcon(":/new/prefix1/Icetea.png"));
    ui->editPin->setPlaceholderText("Enter your Pin");
    ui->editEmployeePin->setPlaceholderText("Enter new Pin");
    ui->editEmployeeName->setPlaceholderText("Enter new Name");
    ui->btnDelete->setIcon(QIcon(":/new/prefix1/Trash.png"));
    QPixmap pixmap(":/new/prefix1/Store_logo.png");


    QPixmap scaledPixmap = pixmap.scaled(250, 250, Qt::KeepAspectRatio);

    ui->label_logo->setPixmap(scaledPixmap);

    ui->label_logo->setAlignment(Qt::AlignCenter);

    ui->label_logo->setGeometry(275, 10, 250, 250);  // Set position and size
}


//STRUCT/VECTOR FOR THE ITEMS

struct item
{
    string itemName;
    float itemPrice;
};
int itemNum;
float Total=0;

vector<item> v;

MainWindow::~MainWindow()
{
    saveEmployeesToFile();
    delete ui;
}


QString managerPin = "999";

//CHECKS PIN

void MainWindow::on_btnOkay_clicked()
{

    QString uPin = ui->editPin->text();

    if (uPin == managerPin) {
        ui->stackedWidget->setCurrentIndex(3); // Navigate to Manager Screen
        ui->editPin->clear();
        return;
    }

    if (employees.contains(uPin)) {
        QString employeeName = employees[uPin];
        ui->labelName->setText("Welcome: " + employeeName);
        ui->stackedWidget->setCurrentIndex(1); // Navigate to Ordering Screen
        ui->editPin->clear();
        return;
    }

    ui->labelWrong->setText("Invalid PIN. Please try again.");
}



void MainWindow::on_btnMain_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}


void MainWindow::on_btnSide_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}


void MainWindow::on_btnDrink_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}


void MainWindow::on_btnPizza_clicked()
{
    item ip;
    ip.itemName = "Pizza";
    ip.itemPrice = 8.99;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  8.99");
    itemNum++;
}


void MainWindow::on_btnHamburger_clicked()
{
    item ip;
    ip.itemName = "Hamburger";
    ip.itemPrice = 5.99;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  5.99");
    itemNum++;
}


void MainWindow::on_btnBurrito_clicked()
{
    item ip;
    ip.itemName = "Burrito";
    ip.itemPrice = 3.99;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  3.99");
    itemNum++;
}


void MainWindow::on_btnHotdog_clicked()
{
    item ip;
    ip.itemName = "Hotdog";
    ip.itemPrice = 3.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  3.75");
    itemNum++;
}


void MainWindow::on_btnOnionRings_clicked()
{
    item ip;
    ip.itemName = "OnionRings";
    ip.itemPrice = 2.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.75");
    itemNum++;
}


void MainWindow::on_btnFries_clicked()
{
    item ip;
    ip.itemName = "Fries";
    ip.itemPrice = 2.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.75");
    itemNum++;

}


void MainWindow::on_btnChurro_clicked()
{
    item ip;
    ip.itemName = "Churro";
    ip.itemPrice = 2.00;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.00");
    itemNum++;
}


void MainWindow::on_btnChickenNuggets_clicked()
{

    item ip;
    ip.itemName = "ChickenNuggets";
    ip.itemPrice = 3.50;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  3.50");
    itemNum++;
}


void MainWindow::on_btnSoda_clicked()
{
    item ip;
    ip.itemName = "Soda";
    ip.itemPrice = 2.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.75");
    itemNum++;
}


void MainWindow::on_btnLemonade_clicked()
{
    item ip;
    ip.itemName = "Lemonade";
    ip.itemPrice = 2.99;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
      ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.99");
    itemNum++;
}


void MainWindow::on_btnIcedTea_clicked()
{
    item ip;
    ip.itemName = "IcedTea";
    ip.itemPrice = 2.85;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  2.85");
    itemNum++;
}

void MainWindow::on_btnCoffee_clicked()
{
    item ip;
    ip.itemName = "Coffee";
    ip.itemPrice = 5.75;
    Total += ip.itemPrice;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
    v.push_back(ip);
    ui->listWidget->addItem(QString::fromStdString(v[itemNum].itemName) + "  ----  5.75");
    itemNum++;
}


void MainWindow::on_btnLogout_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
     ui->editPin->clear();
     ui->labelWrong->clear();
     ui->labelName->clear();
     ui->listWidget->clear();
     Total = 0;
     ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
}


void MainWindow::on_btnDone_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}


void MainWindow::on_btnNew_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->listWidget->clear();
    Total = 0.00;
    ui->labTotal->setText(QString::number(Total)); ui->labelTotal2->setText(QString::number(Total));
}

//CLEARING ITEMS

void MainWindow::on_btnDelete_clicked()
{
    QListWidgetItem* selectedItem = ui->listWidget->currentItem();
    if (selectedItem) {
        int row = ui->listWidget->row(selectedItem);
        ui->listWidget->takeItem(row);
        Total -= v[row].itemPrice; // Update total
        v.erase(v.begin() + row); // Remove from vector
        ui->labTotal->setText(QString::number(Total));
        ui->labelTotal2->setText(QString::number(Total));
        itemNum--;
    }
}

void MainWindow::on_btnBack_clicked()
{
      ui->stackedWidget->setCurrentIndex(1);
}

//ADDING EMPLOYEE

    void MainWindow::on_btnAddEmployee_clicked()
    {
        QString name = ui->editEmployeeName->text();
        QString pin = ui->editEmployeePin->text();

        if (name.isEmpty() || pin.isEmpty()) {
            QMessageBox::warning(this, "Error", "Both name and PIN are required.");
            return;
        }

        if (employees.contains(pin)) {
            QMessageBox::warning(this, "Error", "This PIN is already in use.");
            return;
        }

        // Add the new employee
        employees.insert(pin, name);
        ui->listEmployeeDisplay->addItem(name + " (PIN: " + pin + ")");

        // Clear the input fields
        ui->editEmployeeName->clear();
        ui->editEmployeePin->clear();
    }



    void MainWindow::on_btnLogout2_clicked()
    {
        ui->stackedWidget->setCurrentIndex(0);
        ui->editPin->clear();
        ui->labelWrong->clear();
    }


