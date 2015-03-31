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
    QGraphicsScene * ma_scene ;
    ma_scene = new QGraphicsScene ();
    QGraphicsPixmapItem * mon_item ;

    piece * tableau[5][5];

    QPixmap * img_vide = new QPixmap (":/vide.png") ;
    QPixmap * img_rond = new QPixmap (":/rond.png") ;
    QPixmap * img_croix = new QPixmap (":/croix.png") ;

    for (int j=0; j<5; ++j)
    {
        for (int i=0; i<5; ++i)
        {
            tableau[j][i] = new piece () ;
            tableau[j][i]-> setPixmap(* img_rond) ;
            ma_scene->addItem(tableau[j][i]);
            tableau[j][i]-> setPos(i*45, j*45) ;
            //definit l'echelle
            //mon_item-> setScale(1) ;
        }
    }

    ui->ma_vue-> setScene(ma_scene) ;
}


MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    this -> close();
}
