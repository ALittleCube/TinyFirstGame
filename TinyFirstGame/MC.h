#pragma once
class MC
{
public:
	char m_acName[3] = ("MC");
	void StandardAttack();
	void SpecialAttack();
	void CounterAttack();
	void Dodge();
	int iHealthMax = 100;
	int iHealthCurrent = 100;
	int iEnergyMax = 10;
	int iEnergyCurrent = 10;
	int iPresentD = 0;
	int iPresentL = 0;

};