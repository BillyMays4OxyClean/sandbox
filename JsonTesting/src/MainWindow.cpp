#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
      QMainWindow(parent),
      ui(new Ui::MainWindow)
{
      ui->setupUi(this);
};

MainWindow::~MainWindow()
{
};

void MainWindow::setBrowserText(QString text)
{
    setBrowserText(text.toStdString().c_str());
}

void MainWindow::setBrowserText(std::string text)
{
    setBrowserText(text.c_str());
}

void MainWindow::setBrowserText(const char* text)
{
    ui->textBrowser->setText(text);
}
