#ifndef PLAYER_H
#define PLAYER_H
class Player
{
private:
    int m_x;
    int m_y;

public:
    Player();
    Player(int x, int y);
    void run();

    int xGetter() const;
    int yGetter() const;
};
#endif
