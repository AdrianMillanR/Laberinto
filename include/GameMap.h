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
        MapCell cells[15][50];
        void DrawMap();
        void SetPlayerCell(int PlayerX,int PlayerY);
        bool IsBlock(int x, int y);
        bool IsChest(int x, int y);
        bool IsNextLevel(int x, int y);
        void SaveMap();
        void LoadLevel(int lvl);

    protected:
        void LoadMap();

    private:
};

#endif // GAMEMAP_H
