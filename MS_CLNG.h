
#include <cmath>
#include<iostream>

class MS_CLNG
{
private:
	int a;
	int c;
	int m;
	unsigned int seed ;

public:

    MS_CLNG();
   ~MS_CLNG();    
    int getRandomNumber();
    void setConstantParameters(int a, int b, int c);
    MS_CLNG(int a ,int c,int m, unsigned int s);
    void SetSeed(unsigned int s);
};
