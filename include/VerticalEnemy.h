#ifndef VERTICALENEMY_H
#define VERTICALENEMY_H
#include "Enemy.h"

class VerticalEnemy : public Enemy
{
    public:
        VerticalEnemy(int x, int y);
        void Mover();

    protected:

    private:
};

#endif // VERTICALENEMY_H
