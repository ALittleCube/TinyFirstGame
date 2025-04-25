#pragma once
#include "ML.h"
class Leon : public ML
{
public:
	int GetHearts();
	void SetHearts(int x);
private:
	char m_acName[5] = ("Leon");
	int iHeart = 0;
};