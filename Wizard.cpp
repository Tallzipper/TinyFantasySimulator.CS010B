#include "Warrior.h"
#include "Elf.h"
#include "Wizard.h"

#include <iostream>

Wizard::Wizard(const string &Aname, double Ahealth, double Aatk, int Arank) :
Character(WIZARD, Aname, Ahealth, Aatk),
rank(Arank){}

double Wizard::getRank()
{

    return double(rank);

}

void Wizard::attack(Character &type)
{

    double dmg = this->attackStrength;

    if(type.getType() == WARRIOR)
    {

        Warrior &opp = dynamic_cast<Warrior &>(type);

        opp.damage(dmg);
        cout << "Wizard " << this->getName() << " attacks " << opp.getName() << " --- POOF!!" << endl;
        cout << opp.getName() << " takes " << dmg << " damage." << endl;

    }
    else if(type.getType() == ELF)
    {
        Elf &opp = dynamic_cast<Elf &>(type);

        opp.damage(dmg);
        cout << "Wizard " << this->getName() << " attacks " << opp.getName()<< " --- POOF!!" << endl;
        cout << opp.getName() << " takes " << dmg << " damage." << endl;

    }
    else if(type.getType() == WIZARD)
    {

        Wizard &opp = dynamic_cast<Wizard &>(type);

        dmg = this->attackStrength * (this->rank / opp.getRank());
        opp.damage(dmg);

        cout << "Wizard " << this->getName() << " attacks " << opp.getName()<< " --- POOF!!" << endl;
        cout << opp.getName() << " takes " << dmg << " damage." << endl;

    }


}