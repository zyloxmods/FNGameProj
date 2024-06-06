#include "FortGameplayAbility_PossessProp.h"
#include "Templates/SubclassOf.h"

void UFortGameplayAbility_PossessProp::SetAllowedPropTable(UDataTable* InAllowedPropTable) {
}

TSubclassOf<ABuildingActor> UFortGameplayAbility_PossessProp::GetAllowedPropClassByIndex(int32 AllowedPropIndex) const {
    return NULL;
}

UFortGameplayAbility_PossessProp::UFortGameplayAbility_PossessProp() {
    DefaultAllowedPropTable = NULL;
    AllowedPropTable = NULL;
}

