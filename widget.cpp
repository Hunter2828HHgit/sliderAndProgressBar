#include<bits/stdc++.h>
#include "widget.h"
#include "ui_widget.h"
#include "QDebug"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->slider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
    connect(ui->slider, SIGNAL(valueChanged(int)), this, SLOT(respond));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::respond(int value)
{
    qDebug()<<"value: "<<value;
}

