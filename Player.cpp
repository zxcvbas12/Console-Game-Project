#include <stdio.h>
#include <windows.h>
#include "Player.h"
#include "Console.h"
#include "Enemy.h"
#include "Point.h"


Player::Player() : m_x(0), m_y(0) {}

Player::Player(int x, int y) : m_x(x), m_y(y) {}


int Player::xGetter() const
{
    return m_x;
}

int Player::yGetter() const
{
    return m_y;
}

void Player::run()
{
    Enemy em;
    Point point;
    while (1)
    {
        Clear();
        playEnemy(em);

        point.raisePointIfCollision(xGetter(), yGetter(), em.m_exGetter(), em.m_eyGetter());
        point.showPoints();

        if (GetAsyncKeyState(VK_LEFT) & 0x8000)
        {
            m_x--;
            if (m_x < 0)
            {
                m_x = 0;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
        {
            m_x++;
            if (m_x > 28)
            {
                m_x = 28;
            }
        }

       int  py = yGetter();
        showEnemy(em, py);

        GotoXY(m_x, m_y);
        printf("бу");
        Sleep(50);
    }
}
