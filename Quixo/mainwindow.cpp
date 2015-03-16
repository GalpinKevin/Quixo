#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap * mon_image = new QPixmap (":/milieu.png");
    QGraphicsPixmapItem * mon_item = new QGraphicsPixmapItem (* mon_image);
    QGraphicsScene * ma_scene = new QGraphicsScene ();
    ma_scene -> addItem(mon_item);
    ui->ma_vue->setScene(ma_scene);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    this -> close();
}
