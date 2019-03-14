#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "configfunc.h"
#include "QMessageBox"
#include "QFileDialog"
#include "QTextStream"
#include "QDebug"
#include "QProcess"
#include "analyshell.h"

configfunc *SD = new configfunc;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("qt测试");
    setWindowIcon(QIcon("myico.ico"));
    QString path = SD->readText(PROPATH+"\\test1.txt");
    if(!path.isNull()){
          ui->gamePath->setText(path);
    }
   initTaskCombox();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initTaskCombox(){
    char* filePath = TASKPATH;
    QStringList req = SD->getTaskName(filePath);
    for (QString a :req)	{
       ui->taskListcomboBox->addItem(a);
    }
    connect(ui->taskListcomboBox,SIGNAL(currentIndexChanged(QString)),this,SLOT(print_taskCombox()));
}
void MainWindow::print_taskCombox(){
    ui->startTasklineEdit->setText(ui->taskListcomboBox->currentText());
}
void MainWindow::on_getGamePathButton_clicked()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this,tr("选择游戏目录"),"",tr("exe(*.exe)"));
    if(!filename.isNull()){
            ui->gamePath->setText(filename);
            SD->saveText(filename);
    }else{
        qDebug()<<"取消";
    }
}

void MainWindow::on_gameStartBt_clicked()
{
    QProcess pro;
    QString strPath = ui->gamePath->text();
    pro.startDetached(strPath);
}


void MainWindow::on_taskStartButton_clicked()
{
    QString taskname = ui->taskListcomboBox->currentText();
    analyshell *a = new analyshell;
    a->analyTask(taskname,TASKPATH);
}
