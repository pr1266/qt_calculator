#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QDebug>

bool user_typing;
double firstnum;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("0");
    //numbers;
    connect(ui->number0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->number9,SIGNAL(released()),this,SLOT(digit_pressed()));
    //operators::unary;
    connect(ui->sign,SIGNAL(released()),this,SLOT(unary_operator_pressed()));
    connect(ui->darsad,SIGNAL(released()),this,SLOT(unary_operator_pressed()));
    connect(ui->radikal,SIGNAL(released()),this,SLOT(unary_operator_pressed()));
    connect(ui->pow,SIGNAL(released()),this,SLOT(unary_operator_pressed()));
    connect(ui->inverse,SIGNAL(released()),this,SLOT(unary_operator_pressed()));
    connect(ui->backspace,SIGNAL(released()),this,SLOT(unary_operator_pressed()));
    //connect(ui->ce,SIGNAL(released()),this,SLOT(unary_operator_pressed()));
    //operators::binary;
    connect(ui->plus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->minus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->zarb,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->taghsim,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->plus->setCheckable(true);
    ui->minus->setCheckable(true);
    ui->zarb->setCheckable(true);
    ui->taghsim->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed(){

    double labelNumber;
    QString newlabel;
    QPushButton* button = (QPushButton*)sender();

    if((ui->plus->isChecked() || ui->minus->isChecked() || ui->zarb->isChecked() || ui->taghsim->isChecked()) && (!user_typing)){
        labelNumber = button->text().toDouble();
        user_typing = true;
        newlabel = QString::number(labelNumber,'g',15);
    }
    else{
        if(ui->label->text().contains('.') && button->text()=="0"){
            newlabel = ui->label->text() + button->text();
        }
        else{
            labelNumber = (ui->label->text()+ button->text()).toDouble();
            newlabel = QString::number(labelNumber,'g',15);
        }
    }
    ui->label->setText(newlabel);
}

void MainWindow::on_dot_released()
{
    ui->label->setText(ui->label->text()+".");
}

void MainWindow::unary_operator_pressed(){
    QPushButton* button = (QPushButton*)sender();
    double labelNumber;
    //int y = sizeof(ui->label->text())*4;
    //int* x = new int[sizeof(ui->label->text())*4];
    QString newlabel;
    if(button->text() == "backspace"){
    }
    if(button->text() == "1/x"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = 1 / labelNumber;
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
    }
    if(button->text() == "2th power"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * labelNumber;
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
    }
    if(button->text() == "sqrt"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = sqrt(labelNumber);
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
    }
    if(button->text() == "+/-"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
    }

    if(button->text() == "%"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * 0.01;
        newlabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newlabel);
    }
}

void MainWindow::on_clear_released()
{
ui->plus->setChecked(false);
ui->minus->setChecked(false);
ui->zarb->setChecked(false);
ui->taghsim->setChecked(false);

user_typing = false;
ui->label->setText("0");
}

void MainWindow::on_equal_released()
{
    double labelnumber,secondenum;
    QString newlabel;
    secondenum = ui->label->text().toDouble();

    if(ui->plus->isChecked()){
    labelnumber = firstnum + secondenum;
    newlabel = QString::number(labelnumber,'g',15);
    ui->label->setText(newlabel);
    ui->plus->setChecked(false);
    }
    else if(ui->minus->isChecked()){
    labelnumber = firstnum - secondenum;
    newlabel = QString::number(labelnumber,'g',15);
    ui->label->setText(newlabel);
    ui->minus->setChecked(false);
    }
    else if(ui->zarb->isChecked()){
    labelnumber = firstnum * secondenum;
    newlabel = QString::number(labelnumber,'g',15);
    ui->label->setText(newlabel);
    ui->zarb->setChecked(false);
    }
    else if(ui->taghsim->isChecked()){
    labelnumber = firstnum / secondenum;
    newlabel = QString::number(labelnumber,'g',15);
    ui->label->setText(newlabel);
    ui->taghsim->setChecked(false);
    }
    user_typing = false;
}

void MainWindow::binary_operation_pressed(){

    QPushButton* button = (QPushButton*)sender();
    firstnum = ui->label->text().toDouble();
    button->setChecked(true);
}

void MainWindow::on_ce_clicked()
{
    ui->plus->setChecked(false);
    ui->minus->setChecked(false);
    ui->zarb->setChecked(false);
    ui->taghsim->setChecked(false);

    user_typing = false;
    ui->label->setText("0");
}

/*
void MainWindow::on_backspace_clicked()
{
    if(user_typing) return;

    QString text = ui->label->text();
    text.chop(1);
    if(text.isEmpty()){
        text = "0";
        user_typing = true;
    }
    ui->label->setText(text);
}*/
