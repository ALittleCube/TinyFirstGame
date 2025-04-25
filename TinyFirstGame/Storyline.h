#pragma once
#include "MC.h"
#include "Leon.h"
#include "Deamon.h"
#include "Game.h"
#include "Mission1.h"
#include <iostream>
#include <stdio.h>
#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS

class Storyline
{
public:
	void Story();
	void Ending(Mission1, Deamon, Leon);

};