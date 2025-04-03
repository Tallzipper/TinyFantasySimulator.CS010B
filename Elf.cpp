#include "Warrior.h"
#include "Elf.h"
#include "Wizard.h"

#include <iostream>

Elf::Elf(const string &Aname, double Ahealth, double Aatk, string Afam) :
Character(ELF, Aname, Ahealth, Aatk),
fam(Afam){}

string Elf::getFam()
{

    return fam;

}

void Elf::attack(Character &type)
{
    double dmg = (this->health/ MAX_HEALTH) * this->attackStrength;
    
        if(type.getType() == WIZARD)
        {
    
            Wizard &opp = dynamic_cast<Wizard &>(type);

            opp.damage(dmg);
            cout << "Elf " << this->getName() << " shoots an arrow at " << opp.getName()<< " --- TWANG!!" << endl;
            cout << opp.getName() << " takes " << dmg << " damage." << endl;
    
        }
        else if(type.getType() == ELF)
        {
    
            Elf &opp = dynamic_cast<Elf &>(type);

            if(opp.getFam() != this->getFam())
            {
                opp.damage(dmg);
                cout << "Elf " << this->getName() << " shoots an arrow at " << opp.getName() << " --- TWANG!!" << endl;
                cout << opp.getName() << " takes " << dmg << " damage." << endl;
            
            }
            else
            {

                cout << "Elf " << this->getName() << " does not attack Elf " << opp.getName() << "." << endl;
                cout << "They are both members of the " << getFam() << " family." << endl;

            }
    
        }
        else if(type.getType() == WARRIOR)
        {

            Warrior &opp = dynamic_cast< Warrior &>(type);

            opp.damage(dmg);
            cout << "Elf " << this->getName() << " shoots an arrow at " << opp.getName()<< " --- TWANG!!" << endl;
            cout << opp.getName() << " takes " << dmg << " damage." << endl;

        }
    
}