#ifndef PIECE_H
#define PIECE_H
#include <QGraphicsPixmapItem>

class piece : public QGraphicsPixmapItem
{
public:
    enum couleur_piece {piece_neutre=0, piece_rond, piece_croix};
    explicit piece();
    //explicit piece(couleur_piece _couleur, int16_t _x, int16_t _y);
    bool estJouable(couleur_piece joueur, couleur_piece pieceSelect);
    int16_t x;
    int16_t y;

protected:
    //void mousePressEvent(QGraphicsSceneMouseEvent * event);
    //void mouseMoveEvent(QGraphicsSceneMouseEvent * event);

private:
    std::vector<QPixmap *> pixmapCollection;
    couleur_piece couleur;
};

#endif // PIECE_H
