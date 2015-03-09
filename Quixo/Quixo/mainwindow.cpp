#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsPixmapItem * mon_item;
    mon_item = new QGraphicsPixmapItem (new QPixmap (""));
    mon_item = new QGraphicsItem
    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();
    ma_scene -> addItem(mon_item);
}

MainWindow::~MainWindow()
{
    delete ui;
}
