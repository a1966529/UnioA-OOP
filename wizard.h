#ifndef WIZARD_H
#define WIZARD_H

#include "player.h" 

class wizard : public player 
{
private:
    int mana;   
public:
    void castSpell(player* opponent);

    wizard(std::string name, int health, int damage, int mana);
    
    void setMana(int mana);

    int getMana();

};
#endif