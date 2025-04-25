#pragma once
#include "Missions.h"
#include "MC.h"
#include "Slime.h"
#include "BabyBoar.h"
#include "AdultBoar.h"
#include <iostream>
#include <stdio.h>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS

class Mission1 : public Missions
{
public:
	void iStage1();
	void iStage2();
	void iStage3();
	int iStageNumber = 1;
	void Reward();
	void Fight();
	bool bBeat = false;
	bool GetD();
	void SetD(int x);
private:
	bool bD;

};