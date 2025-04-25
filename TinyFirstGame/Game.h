#pragma once
#include "MC.h"
#include "Slime.h"
#include "BabyBoar.h"
#include "AdultBoar.h"
#include "Mission1.h"
#include "Storyline.h"
#include "Leon.h"
#include "Deamon.h"
#include <iostream>
#include <stdio.h>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS
class Game
{
public:
	int iStart;
	void initGame();
	void tickGame();

};