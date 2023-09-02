#include <stdlib.h>
#include <stdio.h>
#include "Enemy.h"
#include "Player.h"
#include "Console.h"

Enemy::Enemy()
{
	m_ex = 0;
	m_ey = 0;
	m_enemy = false;
}

int Enemy::m_exGetter() const
{
	return m_ex;
}
int Enemy::m_eyGetter() const
{
	return m_ey;
}

bool Enemy::m_enemyGetter() const
{
	return m_enemy;
}

void Enemy::m_exSetter(int getEX)
{
	m_ex = getEX;
}

void Enemy::m_eySetter(int getEY)
{
	m_ey = getEY;
}

void Enemy::m_enemySetter(bool getEnemy)
{
	m_enemy = getEnemy;
}



void playEnemy(Enemy& em)
{
	if (!em.m_enemyGetter())
	{
		em.m_exSetter(rand()%15 *2);	
		em.m_eySetter(0);
		em.m_enemySetter(true);
	}
}

void showEnemy(Enemy& em, int py)
{
	if (em.m_enemyGetter())
	{
		GotoXY(em.m_exGetter(), em.m_eyGetter());
		printf("¡Ü");
		em.m_eySetter(em.m_eyGetter() +1);
		if (em.m_eyGetter() > py)
		{
			em.m_enemySetter(false);
		}
	}
}