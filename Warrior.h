#include <string>

using namespace std;

#ifndef __WARRIOR_H__
#define __WARRIOR_H__

#include "Character.h"

class Warrior : public Character
{

    private:
    string all; // Allegence

    public:
    Warrior(const string & name, double health, double atk, string all);
    string getAll();
    void attack(Character& type);

};


#endif