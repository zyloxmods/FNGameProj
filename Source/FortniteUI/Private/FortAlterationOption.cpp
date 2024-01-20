#include "FortAlterationOption.h"

void UFortAlterationOption::Setup(FAlterationOption& InAlterationOption, EFortAlterationOptionType InAlterationOptionType) {
}


TArray<FFortItemQuantityPair> UFortAlterationOption::GetRequiredIngredients() const {
    return TArray<FFortItemQuantityPair>();
}

float UFortAlterationOption::GetNextPipCount(float MaxPipCount) const {
    return 0.0f;
}

float UFortAlterationOption::GetCurrentPipCount(float MaxPipCount) const {
    return 0.0f;
}

EFortAlterationOptionType UFortAlterationOption::GetAlterationOptionType() const {
    return EFortAlterationOptionType::Upgrade;
}

UFortAlterationItemDefinition* UFortAlterationOption::GetAlterationDefinition() const {
    return NULL;
}

UFortAlterationOption::UFortAlterationOption() {
}

