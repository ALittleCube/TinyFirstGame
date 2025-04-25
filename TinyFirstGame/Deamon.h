#pragma once
#include "ML.h"
class Deamon : public ML
{
public:
    int  GetHearts();
    void SetHearts(int x);
private:
    char m_acName[7] = ("Deamon");
    int iHeart = 0;
};


