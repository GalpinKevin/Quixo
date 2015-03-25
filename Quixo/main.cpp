#include <QApplication>
#include "mainwindow.h"
#include "piece.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    piece * ptr_piece = new piece();
    ptr_piece->x = 10;

    return a.exec();
}
