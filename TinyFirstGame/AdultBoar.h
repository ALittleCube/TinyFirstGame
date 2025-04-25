#pragma once
#include "Boar.h"
class AdultBoar : public Boar
{
public:
	char m_acAdultBoar[11] = ("Adult Boar");
	void BasicAttack();
	void StrongAttack();
	int iHealthMax = 50;
	int iHealthCurrent = 50;
	int iAttackCount = 0;
	int iMonsterType = 3;
};

