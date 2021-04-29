#include "BSD_CLNG.h"


//default constructor
BSD_CLNG::BSD_CLNG()
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
void BSD_CLNG::setConstantParameters(int a, int c, int m)
{
	// setting params
	this->a = a;
	this->c = c;
	this->m =  m;
	
}

//setting seed

void BSD_CLNG::SetSeed(unsigned int s)
{
	this->seed = s;
	
}



/*
    overloaded CLNG constructor
   setting all parameters
*/
BSD_CLNG::BSD_CLNG(int a ,int c,int m,unsigned int s)
{
	this->setConstantParameters(a,c,m);
	this->SetSeed(s);
}


/*
    Getting next random number
*/
int BSD_CLNG::getRandomNumber()
{
	this->seed = (a*seed+c) % m ;
	
	return seed;
}

BSD_CLNG::~BSD_CLNG(){}
