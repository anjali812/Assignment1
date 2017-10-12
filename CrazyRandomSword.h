/* 
 * File:   CrazyRandomSword.h
 * Author: Sree
 *
 * Created on October 11th
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/**
 * Defines the behavior of a simple axe (hitpoint = 60, if armor is greater than 0
   and less than 20 then ignore armor points)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random", std::rand()% 100 + 10) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */