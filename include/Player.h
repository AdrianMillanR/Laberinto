#ifndef PLAYER_H
#define PLAYER_H
#include "GameMap.h"


class Player
{
    public:
        Player();
        bool Mover(GameMap Map);
        int Getx();
        int Gety();
        void LoadHero();

    protected:
        int x;
        int y;

    private:
};

#endif // PLAYER_H
