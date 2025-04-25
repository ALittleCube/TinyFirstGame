#pragma once
#include "Monster.h"
class Boar : public Monster
{
public:
	void BasicAttack();
	void StrongAttack();
	int iHealthMax;
	int iHealthCurrent;
	int iAttackCount;
	int iMonsterType;
};

