#include "Warrior.h"
#include "Elf.h"
#include "Wizard.h"

#include <iostream>

Warrior::Warrior(const string &Aname, double Ahealth, double Aatk, string Aall) :
Character(WARRIOR, Aname, Ahealth, Aatk),
all(Aall){}

string Warrior::getAll()
{

    return all;

}

void Warrior::attack(Character &type)
{

    double dmg = (this->health/ MAX_HEALTH) * this->attackStrength;

    if(type.getType() == WIZARD)
    {

        Wizard &opp = dynamic_cast<Wizard &>(type);

        opp.damage(dmg);
        cout << "Warrior " << this->getName() << " attacks " << opp.getName()<< " --- SLASH!!" << endl;
        cout << opp.getName() << " takes " << dmg << " damage." << endl;

    }
    else if(type.getType() == ELF)
    {

        Elf &opp = dynamic_cast<Elf &>(type);

        opp.damage(dmg);
        cout << "Warrior " << this->getName() << " attacks " << opp.getName()<< " --- SLASH!!" << endl;
        cout << opp.getName() << " takes " << dmg << " damage." << endl;

    }
    else if(type.getType() == WARRIOR)
    {

        Warrior &opp = dynamic_cast<Warrior &>(type);

        if(opp.getAll() != this->getAll())
        {
            opp.damage(dmg);
            cout << "Warrior " << this->getName() << " attacks " << opp.getName() << " --- SLASH!!" << endl;
            cout << opp.getName() << " takes " << dmg << " damage." << endl;
            
        }
        else
        {

            cout << "Warrior " << this->getName() << " does not attack Warrior " << opp.getName() << "." << endl;
            cout << "They share an allegiance with " << this->getAll() << "." << endl;

        }

    }

}