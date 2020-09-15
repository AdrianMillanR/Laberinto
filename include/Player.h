#ifndef PLAYER_H
#define PLAYER_H


class Player
{
    public:
        Player();
        void Mover();
        int Getx();
        int Gety();

    protected:
        int x;
        int y;

    private:
};

#endif // PLAYER_H
