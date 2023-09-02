#ifndef ENEMY_H
#define ENEMY_H

#include "Player.h"

class Enemy
{
private:
	int m_ex;
	int m_ey;
	bool m_enemy;

public:
	Enemy();
	int m_exGetter() const;
	int m_eyGetter() const;
	bool m_enemyGetter() const;

	void m_exSetter(int getEX);
	void m_eySetter(int getEY);
	void m_enemySetter(bool getEnemy);

};

void playEnemy(Enemy& em);
void showEnemy(Enemy& em, int py);

#endif