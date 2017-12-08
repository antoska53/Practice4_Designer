#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    val = new QIntValidator(0, 99);
    ui->lineEdit->setValidator(val);
    //ui->label->setBuddy(ui->spinBox);
    //ui->label_2->setBuddy(ui->lineEdit);
    //ui->label_3->setBuddy(ui->horizontalSlider);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setEditChanged(QString str){
    int n;
    n = str.toInt();
    emit mySignal(n);
}

void MainWindow::on_action_About_triggered()
{
    QMessageBox::about(this, "sdf", "qwerty");
}
