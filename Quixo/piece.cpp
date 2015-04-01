#include "piece.h"
#include <QGraphicsPixmapItem>
#include "mainwindow.h"

piece::piece()
{
QGraphicsPixmapItem();
x=0;
y=0;
this->setFlags(ItemIsMovable);
couleur=piece_neutre;
}


bool piece::estJouable(couleur_piece joueur, couleur_piece pieceSelect)
{
    if(pieceSelect == joueur || pieceSelect == piece_neutre)
    {
        return true;
    }
    else
        return false;
}

void piece::mouseClickEvent(QGraphicsSceneMouseEvent *event)
{
}

