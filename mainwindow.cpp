#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

float xOne = 0, xTwo = 0, xReturn = 0;
int selectOp = 1;

void MainWindow::on_radioAdd_toggled(bool checked)
{
    if (checked) {
        selectOp = 1;
        //ui->deBugger->setText(QString::number(selectOp));
    }
}

void MainWindow::on_radioSub_toggled(bool checked)
{
    if (checked) {
        selectOp = 2;
        //ui->deBugger->setText(QString::number(selectOp));
    }
}

void MainWindow::on_radioMult_toggled(bool checked)
{
    if (checked) {
        selectOp = 3;
        //ui->deBugger->setText(QString::number(selectOp));
    }
}

void MainWindow::on_radioDiv_toggled(bool checked)
{
    if (checked) {
        selectOp = 4;
        //ui->deBugger->setText(QString::number(selectOp));
    }
}


float addFunc(float a,float b)
{
    float retVal = a + b;
    return retVal;
}

float subFunc(float a,float b)
{
    return (a - b);
}

float multFunc(float a,float b)
{
    return (a * b);
}

float divFunc(float a,float b)
{
    return (a / b);
}

void MainWindow::on_pushEquals_clicked()
{
    xOne = ui->input1->text().toFloat();
    xTwo = ui->input2->text().toFloat();

    switch(selectOp){
        case 1:{
            xReturn = addFunc(xOne, xTwo);
            //ui->deBugger->setText("addFunc");
            break;
        }
        case 2:{
            xReturn = subFunc(xOne, xTwo);
            //ui->deBugger->setText("subFunc");
            break;
        }
        case 3:{
            xReturn = multFunc(xOne, xTwo);
            //ui->deBugger->setText("multFunc");
            break;
        }
        case 4:{
            xReturn = divFunc(xOne, xTwo);
            //ui->deBugger->setText("divFunc"); Did it work?
            break;
        }
    }
    ui->return_2->setText(QString::number(xReturn));
}


