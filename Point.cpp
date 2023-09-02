#include <stdio.h>
#include "Point.h"

Point::Point() : point(0){}

int Point::getPoint() const
{
	return point;
}
void Point::raisePointIfCollision(int playerX, int playerY, int enemyX, int enemyY)
{
    if (playerX == enemyX && playerY == enemyY)
    {
        point++;
    }
}

void Point::showPoints() const
{
    printf("Your Points: %d", point);
}