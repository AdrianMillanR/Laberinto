#ifndef PLAYER_H
#define PLAYER_H
#include "GameMap.h"


class Player
{
    public:
        Player();
        int Mover(GameMap Map);
        int Getx();
        int Gety();
        void Setx(int x);
        void Sety(int y);

    protected:
        int x;
        int y;

    private:
};

#endif // PLAYER_H
