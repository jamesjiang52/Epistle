#include "Potions.hpp"

void wholeWheatBreadUseFunction(Player *player) {
    player->gainHealth(20);
    std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
}

Potion *createWholeWheatBread() {
    Potion *potion = new Potion(
        "whole wheat bread",
        "This is only available from my favourite bakery (+20 health).\n",
        1,
        wholeWheatBreadUseFunction;
    );
    return potion;
}

void whiteBreadUseFunction(Player *player) {
    player->gainHealth(15);
    std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
}

Potion *createWhiteBread() {
    Potion *potion = new Potion(
        "white bread",
        "\"Acquired\" from my second-favorite bakery, it was saved for a rainy day. It will soon rain... the tears of my enemies (+15 health).\n",
        1,
        loafOfBreadUseFunction
    );
    return potion;
}

void bottleOfMeadUseFunction(Player *player) {
    player->gainHealth(15);
    std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
}

Potion *createBottleOfMead() {
    Potion *potion = new Potion(
        "bottle of mead",
        "Nothing soothes pain like a dash of mead - a single gulp and all is forgotten (+15 health).\n",
        1,
        bottleOfMeadUseFunction
    );
    return potion;
}

void squareOfChocolateUseFunction(Player *player) {
    player->gainHealth(10);
    std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
}

Potion *createSquareOfChocolate() {
    Potion *potion = new Potion(
        "square of chocolate",
        "There's nothing like the gooey wonderfulness of this brown-coloured delicacy (+10 health).\n",
        1,
        squareOfChocolateUseFunction
    );
    return potion;
}

void appleUseFunction(Player *player) {
    player->gainHealth(10);
    std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
}

Potion *createApple() {
    Potion *potion = new Potion(
        "apple",
        "An apple a day keeps the doctor away (+10 health).\n",
        1,
        appleUseFunction
    );
    return potion;
}

void bananaUseFunction(Player *player) {
    player->gainHealth(10);
    std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
}

Potion *createBanana() {
    Potion *potion = new Potion(
        "banana",
        "This banana was once young and green (+10 health).\n",
        1,
        bananaUseFunction
    );
    return potion;
}

void durrianUseFunction(Player *player) {
    int choices[2] = {-5, 10};
    std::srand(std::time(nullptr));
    int choice = choices[std::rand() % 2];
    player->gainHealth(choice);
    
    if (choice > 0)
        std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
    else if (!player->getCurrentHealth())  // player (almost) dies from eating durrian
        player->gainHealth(1);
        std::cout << "The durrian puts me on the brink of death (" << "1/" << player->getStartingHealth() << " health).\n\n"; 
    else
        std::cout << "I can feel my lifeforce weakening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n"; 
}

Potion *createDurrian() {
    Potion *potion = new Potion(
        "durrian",
        "These taste like heaven... but smell like hell (random between +10 health and -5 health).\n",
        1,
        durrianUseFunction
    );
    return potion;
}

void lemonUseFunction(Player *player) {
    player->gainHealth(5);
    std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
}

Potion *createLemon() {
    Potion *potion = new Potion(
        "lemon",
        "Only when you have eaten a lemon do you appreciate what sweet is (+5 health).\n",
        1,
        lemonUseFunction
    );
    return potion;
}

void peachUseFunction(Player *player) {
    player->gainHealth(10);
    std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
}

Potion *createPeach() {
    Potion *potion = new Potion(
        "peach",
        "A man should never refuse to taste a peach. He may never get the chance again (+10 health).\n",
        1,
        peachUseFunction
    );
    return potion;
}

void ambrosiaUseFunction(Player *player) {
    int choices[3] = {15, 25, -20};
    std::srand(std::time(nullptr));
    int choice = choices[std::rand() % 3];
    player->gainHealth(choice);
    
    if (choice > 0)
        std::cout << "I can feel my lifeforce strengthening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n";
    else if (!player->getCurrentHealth())  // player (almost) dies from eating ambrosia
        player->gainHealth(1);
        std::cout << "The ambrosia puts me on the brink of death (" << "1/" << player->getStartingHealth() << " health).\n\n"; 
    else
        std::cout << "I can feel my lifeforce weakening (" << player->getCurrentHealth() << "/" << player->getStartingHealth() << " health).\n\n"; 
}

Potion *createAmbrosia() {
    Potion *potion = new Potion(
        "ambrosia",
        "It is the food of the gods, or so it is said. I'm sure they won't be angry if I take just a little bite (random between +15 health, +25 health, and -20 health).\n",
        1,
        ambrosiaUseFunction
    );
    return potion;
}

void mysteriousWhitePowderUseFunction(Player *player) {
    int choices[5] = {5, 15, 25, -10, -20};
    std::srand(std::time(nullptr));
    int choice = choices[std::rand() % 5];
    
    if (choice > 2) {  // reduce player stagger
        
    } else {  // increase player health
        
    }
}

Potion *createMysteriousWhitePowder() {
    Potion *potion = new Potion(
        "mysterious white powder",
        "I was told that a couple of pinches will invigorate me from even the deepest of stupors.",
        1,
        mysteriousWhitePowderUseFunction
    );
    return potion;
}
