/* 
 * File:   CrazySword.h
 * Author: Sree
 *
 * Created on October 11th
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYSWORD_H
#define CRAZYSWORD_H

/**
 * Defines the behavior of a simple axe (hitpoint = 80, Ignores 50% of armor points)
 */
class CrazySword : public Weapon {
public:

    CrazySword() : Weapon("Crazy swordd", 80) {
    }
    virtual ~CrazyRandomSword() {}; 
    virtual double hit(double armor);

};

#endif /* CRAZYSWORD_H */