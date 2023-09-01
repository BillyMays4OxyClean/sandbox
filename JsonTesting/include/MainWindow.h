#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <string>
#include <memory>

namespace Ui {
      class MainWindow;
};

class MainWindow : public QMainWindow
{
      Q_OBJECT

public:
      explicit MainWindow(QWidget *parent = 0);
      ~MainWindow();

      void setBrowserText(QString text);
      void setBrowserText(std::string text);
      void setBrowserText(const char* text);


private:
      std::unique_ptr<Ui::MainWindow> ui;
};

#endif