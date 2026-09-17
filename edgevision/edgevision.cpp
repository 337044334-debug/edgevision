#include "edgevision.h"
#include "ui_edgevision.h"

EdgeVision::EdgeVision(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EdgeVision)
{
    ui->setupUi(this);
}

EdgeVision::~EdgeVision()
{
    delete ui;
}

