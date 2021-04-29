#include "MS_CLNG.h"


//default constructor
MS_CLNG::MS_CLNG()
{
	//default  params
	this->a = 13;
	this->c = 23;
	//default params
	this->m = 6;
	this->seed=100;
}

/*
    setting object parameters
    @parameter a
    @parameter c
    @parameter m
*/
void MS_CLNG::setConstantParameters(int a, int c, int m)
{
	// setting params
	this->a = a;
	this->c = c;
	this->m =  m;
	
}

//setting seed

void MS_CLNG::SetSeed(unsigned int s)
{
	this->seed = s;
	
}



/*
    overloaded CLNG constructor
   setting all parameters
*/
MS_CLNG::MS_CLNG(int a ,int c,int m,unsigned int s)
{
	this->setConstantParameters(a,c,m);
	this->SetSeed(s);
}


/*
    Getting next random number
*/
int MS_CLNG::getRandomNumber()
{
	this->seed = (a*seed+c) % m ;
	
	return seed >> 16;
}

MS_CLNG::~MS_CLNG(){}
