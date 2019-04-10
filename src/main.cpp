#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  // add myself style css
  QFile file(":/qss/PushButton.qss");
  if (file.open(QFile::ReadOnly)) {
    QString style = QString::fromLatin1(file.readAll());
    a.setStyleSheet(style);
    file.close();
  }

  MainWindow w;
  w.show();

  return a.exec();
}
