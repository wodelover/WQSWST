#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFile>
#include <QFontDatabase>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // window tittle
    //  this->setWindowFlags(Qt::FramelessWindowHint);

    // [0] init function button Icon
    initIcon();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::initIcon() {

    // [0] load user icon font
    QString font = "";

    QFile fontFile(":/font/icomoon.ttf");
    if (!fontFile.open(QIODevice::ReadOnly)) {
        qDebug() << "Open font file error";
        return;
    }

    int loadedFontID =
            QFontDatabase::addApplicationFontFromData(fontFile.readAll());
    QStringList loadedFontFamilies =
            QFontDatabase::applicationFontFamilies(loadedFontID);
    if (!loadedFontFamilies.empty()) {
        font = loadedFontFamilies.at(0);
    }
    fontFile.close();

    QLineSeries line;
    for(double x=0;x<10;x+=0.1){
        line.append(x,sin(x));
    }

    QChart c;
    c.addSeries(&line);
//    ui->subMenuWidget->

}
