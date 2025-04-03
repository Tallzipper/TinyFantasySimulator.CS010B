#include <string>


using namespace std;

#ifndef __ELF_H__
#define __ELF_H__

#include "Character.h"

class Elf : public Character {

    private: 
    string fam;

    public:

    Elf(const string & name, double health, double atk, string fam);
    string getFam();
    void attack(Character& type);
    

};

#endif