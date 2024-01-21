#include "FortAthenaAIBotEvaluator_Heal.h"

UFortAthenaAIBotEvaluator_Heal::UFortAthenaAIBotEvaluator_Heal() {
    this->HealingObjectKeyName = TEXT("AIEvaluator_Healing_Object");
    this->UseMedkitUnderThisHealthPercentage = 0.80f;
    this->UseShieldPotionUnderThisShieldPercentage = 0.80f;
}

