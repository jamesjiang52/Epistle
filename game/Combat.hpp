#ifndef COMBAT_H
#define COMBAT_H

#include <iostream>
#include <string>
#include <regex>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Parameters.hpp"
#include "DirectionClass.hpp"
#include "InteractableObjectClass.hpp"
#include "LocationClass.hpp"
#include "GenericEnemyClass.hpp"
#include "PlayerClass.hpp"
#include "MiscObjects.hpp"
#include "Weapons.hpp"
#include "Armors.hpp"
#include "Shields.hpp"
#include "Potions.hpp"
#include "Utilities.hpp"

std::string getEnemyCombatChoice(GenericEnemy *enemy);
void playerGainHealthFromEffects(Player *player, int combatTurn);
int getPlayerStaggerModifierFromEffects(Player *player, GenericEnemy *enemy, int combatTurn);
int getEnemyStaggerModifierFromEffects(Player *player, GenericEnemy *enemy, int combatTurn);
void removeInactiveEffects(Player *player, int combatTurn);
void removeAllEffects(Player *player);
int calculateDamage(int baseDamage, int missedModifier, int criticalModifier, float damageTakenMultiplier=1);
bool playerStaggerRoll(Player *player, GenericEnemy *enemy, int combatTurn, bool critical);
bool enemyStaggerRoll(Player *player, GenericEnemy *enemy, int combatTurn, bool critical);
void resetModifiers(
    int &playerMissedModifier,
    int &playerCriticalModifier,
    float &playerDamageTakenMultiplier,
    int &enemyMissedModifier,
    int &enemyCriticalModifier,
    float &enemyDamageTakenMultiplier,
    bool ignorePlayerMissedModifier,
    bool ignorePlayerCriticalModifier,
    bool ignorePlayerDamageTakenMultiplier,
    bool ignoreEnemyMissedModifier,
    bool ignoreEnemyCriticalModifier,
    bool ignoreEnemyDamageTakenMultiplier
)
void combat(Player *player, GenericEnemy *enemy);
void printPlayerEmbellishedHealthInfo(Player *player);
void printEnemyEmbellishedHealthInfo(GenericEnemy *enemy);

#endif
