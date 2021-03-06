#include "GenericEnemyClass.hpp"

GenericEnemy::GenericEnemy(std::string name, int startingHealth) {
    this->name = name;
    this->startingHealth = startingHealth;
    this->currentHealth = startingHealth;

    this->weapon = NULL;
    this->armor = NULL;
    this->shield = NULL;
}

GenericEnemy::~GenericEnemy() {
    this->weapon = NULL;
    this->armor = NULL;
    this->shield = NULL;
}

bool GenericEnemy::operator==(const GenericEnemy &enemy) {
    return(name == enemy.getName());
}

std::string GenericEnemy::getName() const {
    return name;
}

int GenericEnemy::getStartingHealth() const {
    return startingHealth;
}

int GenericEnemy::getCurrentHealth() const {
    return currentHealth;
}

int GenericEnemy::getTotalEncumbrance() const {
    int sum = 0;
    for (size_t i = 0; i < inventory.size(); i++) {
        InteractableObject *object = inventory.at(i);
        sum += object->getEncumbrance();
    }
    return sum;
}

void GenericEnemy::loseHealth(int amount, int armorReductionPercent) {
    float damageReductionFraction;
    if (shield) damageReductionFraction = std::min(armor->getArmor() + shield->getArmor(), MAX_ARMOR)*MAX_ARMOR_DMG_REDUCTION*(1 - armorReductionPercent/100.0)/MAX_ARMOR;
    // ^ this value is 0 at armor=0 and MAX_ARMOR_DMG_REDUCTION at armor=MAX_ARMOR
    else damageReductionFraction = std::min(armor->getArmor(), MAX_ARMOR)*MAX_ARMOR_DMG_REDUCTION*(1 - armorReductionPercent/100.0)/MAX_ARMOR;

    int loseHealthAmount = std::max((int)(amount*(1 - damageReductionFraction)), 0);  // don't let damage go below 0
    
    if (currentHealth - loseHealthAmount > 0)
        currentHealth -= loseHealthAmount;
    else {  // enemy dies
        currentHealth = 0;
        // probably do something else as well
    }
}

void GenericEnemy::attack(Player *player) {
    player->loseHealth(weapon->getDamage());
}

std::vector<InteractableObject*> GenericEnemy::getInventory() const {
    return inventory;
}

std::vector<InteractableObject*>::iterator GenericEnemy::objectPosition(InteractableObject *object) {
    /* 
    Returns a vector iterator, with value corresponding to the index of the inventory vector
    if object is in the vector. Otherwise, returns the iterator with the sizes of the inventory.
    */
    return std::find(inventory.begin(), inventory.end(), object);
}

void GenericEnemy::addToInventory(InteractableObject *object) {
    /*
    Adds new object to inventory
    */
    if (object)
        inventory.push_back(object);
}

void GenericEnemy::removeFromInventory(InteractableObject *object) {
    /*
    Removes object from inventory if it is in it
    Otherwise, does nothing
    */
    std::vector<InteractableObject*>::iterator position = objectPosition(object);
    if (position != inventory.end())
        inventory.erase(position);
}

Weapon *GenericEnemy::getWeapon() const {
    return weapon;
}

void GenericEnemy::setWeapon(Weapon *weapon) {
    this->weapon = weapon;
}

Armor *GenericEnemy::getArmor() const {
    return armor;
}

void GenericEnemy::setArmor(Armor *armor) {
    this->armor = armor;
}

Shield *GenericEnemy::getShield() const {
    return shield;
}

void GenericEnemy::setShield(Shield *shield) {
    this->shield = shield;
}
