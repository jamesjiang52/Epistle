#ifndef PARAMETERS_H
#define PARAMETERS_H

const int PLAYER_STARTING_HEALTH = 100;
const int MAX_ARMOR = 100;  // armor is capped at this value - any higher value carries this value instead
const float MAX_ARMOR_DMG_REDUCTION = 0.8;  // between 0 and 1, 0 renders armor useless, 1 negates all damage at the max armor rating
const int MAX_ENCUMBRANCE = 100;  // player can't attack or move if carrying more than this value
const float MIN_STAGGER_CHANCE = 0.4;  // min chance of being staggered in combat from a regular stagger after losing a duel
const float MAX_STAGGER_CHANCE = 0.95;  // max chance of being staggered in combat from a regular stagger after losing a duel
const float DEFAULT_MISSED_CHANCE = 0.15;  // default chance of missing a damaging attack
const float DEFAULT_NORMAL_CHANCE = 0.7;  // default chance of dealing normal damage with a damaging attack
const float DEFAULT_CRITICAL_CHANCE = 0.15;  // default chance of dealing critical damage with a damaging attack
const float CRITICAL_DAMAGE_MULTIPLIER = 2;  // critical damage multiplier
const float SIGNIFICANT_DAMAGE_MULTIPLIER = 1.5;  // "significant damage" in combat compared to regular damage (can stack with CRITICAL_DAMAGE_MULTIPLIER)
const float SIGNIFICANT_STAGGER_MULTIPLIER = 1.5;  // "significant stagger" in combat compared to regular stagger
const float BASH_DAMAGE_POWER_SCALE = 0.25;  // bash damage is calculated by raising the shield's encumbrance to this power and multiplying it by BASH_DAMAGE_MULTIPLIER
// ^ this variable should be in the range (0, 1]. A higher value amplifies the effectiveness of a heavier shield compared to a lighter one.
const float BASH_DAMAGE_MULTIPLIER = 2;  // bash damage is calculated by raising the shield's encumbrance to the BASH_DAMAGE_POWER_SCALE-th power and multiplying it by this number
const int BASH_WEAPON_DISABLED_EFFECTIVE_SHIELD_WEIGHT_MODIFIER = -1;  // use the shield's encumbrance plus this number in weapon disabled calculations
const float BASH_WEAPON_DISABLED_CHANCE_POWER_SCALE = 0.5;  // weapon disabled chance is calculated by raising the shield's encumbrance to this power and multiplying it by BASH_WEAPON_DISABLED_CHANCE_MULTIPLIER
// ^ this variable should be in the range (0, 1]. A higher value amplifies the effectiveness of a heavier shield compared to a lighter one.
const float BASH_WEAPON_DISABLED_CHANCE_MULTIPLIER = 5;  // weapon disabled chance is calculated by raising the shield's encumbrance to the BASH_WEAPON_DISABLED_CHANCE_POWER_SCALE-th power and multiplying it by this number

const int THRUST_CRITICAL_MODIFIER = 10;
const int THRUST_MISSED_MODIFIER = 5;
const int SLASH_CRITICAL_MODIFIER = -5;
const int SLASH_MISSED_MODIFIER = -10;
const int PARRY_CRITICAL_MODIFIER = -5;
const int DODGE_MISSED_MODIFIER = 5;
const int FEINT_STAGGER_MODIFIER = 5;
const int DISENGAGE_STAGGER_MODIFIER = -5;
const int PARRY_FEINT_MISSED_MODIFIER = -10;
const int SLASH_DISENGAGE_CRITICAL_MODIFIER = 10;
const int FEINT_DODGE_CRITICAL_MODIFIER = 10;
const int THRUST_DODGE_CRITICAL_MODIFIER = 10;
const int SLASH_PARRY_MISSED_MODIFIER = -10;
const int FEINT_DISENGAGE_CRITICAL_MODIFIER = 5;
const int FEINT_DISENGAGE_MISSED_MODIFIER = -5;
const int BLOCK_THRUST_MISSED_MODIFIER = -5;
const int BLOCK_SLASH_CRITICAL_MODIFIER = 5;
const int BLOCK_FEINT_MISSED_MODIFIER = -5;
const int BLOCK_FEINT_CRITICAL_MODIFIER = 5;
const int STAGGERED_THRUST_CRITICAL_MODIFIER = 5;
const int STAGGERED_SLASH_MISSED_MODIFIER = -5;

#endif
