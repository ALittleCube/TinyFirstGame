#pragma once
#include "Monster.h"
class Slime : public Monster
{
public:
	char m_acSlime[6] = ("Slime");
	void BasicAttack();
	void StrongAttack();
	int iHealthMax = 25;
	int iHealthCurrent = 25;
	int iAttackCount = 0;
	int iMonsterType = 1;
};
