#ifndef PLAYER_H
#define PLAYER_H
#include "GameMap.h"


class Player
{
    public:
        Player();
        void Mover(GameMap Map);
        int Getx();
        int Gety();

    protected:
        int x;
        int y;

    private:
};

#endif // PLAYER_H
