#ifndef GENERIC_ENEMY_H
#define GENERIC_ENEMY_H

#include <string>
#include <vector>
#include <algorithm>
#include "Parameters.hpp"
#include "InteractableObjectClass.hpp"
#include "WeaponClass.hpp"
#include "ArmorClass.hpp"
#include "PlayerClass.hpp"

class Player;
class Weapon;
class Armor;

class GenericEnemy {
    protected:
        int startingHealth;
        int currentHealth;
        int totalEncumbrance;
        Weapon *weapon;
        Armor *armor;
        std::string name;
        std::vector<InteractableObject*> inventory;
        
    public:
        GenericEnemy(std::string name, int startingHealth);
        std::string getName() const;
        int getStartingHealth() const;
        int getCurrentHealth() const;
        int getTotalEncumbrance() const;
        void loseHealth(int amount);
        void attack(Player *player);
        std::vector<InteractableObject*> getInventory() const;
        void addToInventory(InteractableObject *object);
        void removeFromInventory(InteractableObject *object);
        Weapon *getWeapon() const;
        void setWeapon(Weapon *weapon);
        Armor *getArmor() const;
        void setArmor(Armor *armor);
};

#endif
