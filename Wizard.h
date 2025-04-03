#include <string>

using namespace std;

#ifndef __WIZARD_H__
#define __WIZARD_H__

#include "Character.h"

class Wizard : public Character
{
    private:
    int rank;

    public: 

    Wizard(const string & name, double health, double atk, int rank);
    double getRank();
    void attack(Character& type);

};

#endif