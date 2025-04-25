#pragma once
#include "Boar.h"
class BabyBoar : public Boar
{
public:
	char m_acBabyBoar[10] = ("Baby Boar");
	void BasicAttack();
	void StrongAttack();
	int iHealthMax = 35;
	int iHealthCurrent = 35;
	int iAttackCount = 0;
	int iMonsterType = 2;

};

