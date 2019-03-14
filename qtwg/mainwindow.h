#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QDir>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initTaskCombox();
    QString PROPATH =  QDir::currentPath();
    char* TASKPATH = "C:\\Qt\\workspace\\tasks\\";

private slots:
    void on_getGamePathButton_clicked();

    void on_gameStartBt_clicked();

    void on_taskStartButton_clicked();


public slots:
    void print_taskCombox();

private:
    Ui::MainWindow *ui;
    QDialog *dialog;
};
#endif // MAINWINDOW_H
