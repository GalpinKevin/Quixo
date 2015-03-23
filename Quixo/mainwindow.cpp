#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include "piece.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene * ma_scene;
    ma_scene = new QGraphicsScene();

    piece * plateau[5][5];

    QPixmap * vide = new QPixmap(":/vide.jpng");
    QPixmap * croix = new QPixmap(":/croix.png");
    QPixmap * rond = new QPixmap(":/rond.png");

    for (int i = 0; i<5; i++)
    {
    y = 43*i;
    for (int j = 0; j<5; j++)
    {
    plateau[i][j] = new piece();
    plateau[i][j]->setPixmap(* rond);
    ma_scene->addItem(plateau[i][j]);
    x = 43*j;
    plateau[i][j]->setPos(x,y);
    ui->ma_vue->setScene(ma_scene);
    }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    this -> close();
}
