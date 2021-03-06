#ifndef ACTIVE_EFFECT_H
#define ACTIVE_EFFECT_H

#include <string>

class ActiveEffect {
    private:
        std::string targetStat;  // what stat the effect modifies e.g. "player stagger"
        int amount;
        int combatTurnsForActivation;  // how many combat turns is required for the effect to activate
        int duration;  // -1 if permanent, -2 if until end of next combat
        
    public:
        ActiveEffect(std::string targetStat, int amount, int combatTurnsForActivation, int duration);
        bool operator==(const ActiveEffect &activeEffect);
        std::string getTargetStat() const;
        int getAmount() const;
        int getCombatTurnsForActivation() const;
        int getDuration() const;
};

#endif
