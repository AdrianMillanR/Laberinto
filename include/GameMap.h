#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "MapCell.h"


class GameMap
{
    public:
        //Declaramaos constructor
        GameMap();

        //Declaramos un apuntador de tipo MapcCell llamado "PlayerCell"
        MapCell* PlayerCell;
        MapCell cells[15][10];
        void DrawMap();
        void SetPlayerCell(int PlayerX,int PlayerY);

    protected:


    private:
};

#endif // GAMEMAP_H
