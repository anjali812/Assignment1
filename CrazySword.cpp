/* 
 * File:   CrazySword.cpp
 * Author: Sree
 * 
 * Created on October 11th, 2017
 */

#include "CrazySword.h"

double CrazySword::hit(double armor) {

			double damage = hitPoints - (armor * 0.5);
	    	if (damage < 0) 
	    	{
	        	return 0;
	   	    }
	        return damage;
	
   
  
}