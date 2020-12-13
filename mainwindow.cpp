#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_Start_button_clicked() {

}
void MainWindow::on_Pause_button_clicked() {

}
void MainWindow::on_Resume_button_clicked() {

}
