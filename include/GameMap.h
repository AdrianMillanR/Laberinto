#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"


class GameMap
{
    public:
        GameMap();
        MapCell cells[15][10];
        void DrawMap();

    protected:


    private:
};

#endif // GAMEMAP_H
