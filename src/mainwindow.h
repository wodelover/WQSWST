#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QChartView>
#include <QLineSeries>
using namespace QtCharts;

namespace Ui {
class MainWindow;
}

/*
 * @className: MainWindow
 * @descreption: 所有子功能界面的入口文件类，用于管理所有的子功能模块
 * @autor: zhangh
 * @time: 2019-04-10
 */
class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
  /*
   * @methodName: initIcon
   * @descreption: 初始化功能图标
   * @autor: zhangh
   * @time: 2019-04-10
   */
  void initIcon();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
