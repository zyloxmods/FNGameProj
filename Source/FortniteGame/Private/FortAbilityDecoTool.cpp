#include "FortAbilityDecoTool.h"

void AFortAbilityDecoTool::GetSpawnParameters(FAbilityToolSpawnParameters& OutSpawnParamters) const {
}

UFortGameplayAbility* AFortAbilityDecoTool::GetPlacementAbilityInstance() {
    return NULL;
}

FGameplayAbilitySpecHandle AFortAbilityDecoTool::GetPlacementAbilityHandle() {
    return FGameplayAbilitySpecHandle{};
}

ABuildingActor* AFortAbilityDecoTool::AbilitySpawnDeco(const FAbilityToolSpawnParameters& SpawnParameters) {
    return NULL;
}

AFortAbilityDecoTool::AFortAbilityDecoTool() {
}

