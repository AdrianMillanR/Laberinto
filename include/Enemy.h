#ifndef ENEMY_H
#define ENEMY_H
#include "GameMap.h"
#include "MapCell.h"


class Enemy
{
    public:
        Enemy(int x, int y);

        int Getx();
        int Gety();
        void Setx(int x);
        void Sety(int y);
        void Mover();

    protected:
        int x;
        int y;
        bool bandera;

    private:
};

#endif // ENEMY_H
