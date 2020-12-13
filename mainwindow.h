#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "canyon.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QTimer  *timer;
    QGraphicsScene *scene;

    float dt;
    int h_limit, v_limit;

public slots:
    void update_bodies();

private slots:
    void on_Start_button_clicked();
    void on_Pause_button_clicked();
    void on_Resume_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
