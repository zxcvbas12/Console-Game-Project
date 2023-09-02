#ifndef POINT_H
#define POINT_H
class Point
{
private:
	int point;
public:
	Point();
	
	int getPoint() const;
	void raisePointIfCollision(int playerX, int playerY, int enemyX, int enemyY);
	void showPoints() const;
};

#endif