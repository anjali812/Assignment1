/* 
 * File:   CrazyRandomSword.cpp
 * Author: Sree
 * 
 * Created on October 11th, 2017
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {

	double damage = hitPoints - std::rand() % ((int)armor/2);
	    	if (damage < 0) 
	    	{
	        	return 0;
	   	    }
	        return damage;
	
   
  
}