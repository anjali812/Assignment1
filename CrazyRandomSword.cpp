/* 
 * File:   CrazyRandomSword.cpp
 * Author: Sree
 * 
 * Created on October 11th, 2017
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {
	double random = randPoint();

	double damage = hitPoints - random % ((int)armor/2);
	    	if (damage < 0) 
	    	{
	        	return 0;
	   	    }
	        return damage;
	
   
  
}

double CrazyRandomSword::randPoint
{
	std::srand(time(0));
	return rand() % 100 + 10;
}