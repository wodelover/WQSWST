#include "RunStatusForm.h"
#include "ui_RunStatusForm.h"

RunStatusForm::RunStatusForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RunStatusForm)
{
    ui->setupUi(this);
}

RunStatusForm::~RunStatusForm()
{
    delete ui;
}
