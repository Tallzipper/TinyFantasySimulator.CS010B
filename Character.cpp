#include "Character.h"

#include <iostream>

Character::Character(HeroType type, const string &name, double health, double atk): 
type(type), 
name(name), 
health(health),
attackStrength(atk){}

HeroType Character::getType() const
{

    return this->type;

}

const string & Character::getName() const
{

    return this->name;

}

int Character::getHealth() const
{

    return this->health;

}

void Character::damage(double d)
{

    health = health - d;

}

bool Character::isAlive() const
{
    return(health > 0);
}