#include "addtable.h"
#include "mainwindow.h"
#include "ui_addtable.h"
#include <QString>

AddTable::AddTable(int theColumnNumber,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTable)
{
    ui->setupUi(this);

    ui->tableWidgetAddTable->clear();
    ui->tableWidgetAddTable->setRowCount(0);
    ui->tableWidgetAddTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

AddTable::~AddTable()
{
    delete ui;
}

void AddTable::setColumnNumber(int theColumnNumber)
{
    columnNumber = theColumnNumber;
}