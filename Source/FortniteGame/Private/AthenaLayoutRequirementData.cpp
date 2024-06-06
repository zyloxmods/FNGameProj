#include "AthenaLayoutRequirementData.h"
#include "Templates/SubclassOf.h"

ABuildingLayoutRequirement* UAthenaLayoutRequirementData::SpawnMatchingLayoutRequirement(ABuildingSMActor* SourceActor, bool bMatchResourceType) {
    return NULL;
}

bool UAthenaLayoutRequirementData::FindMatchingLayoutRequirementClass(ABuildingSMActor* BuildingActor, TSubclassOf<ABuildingSMActor>& MatchingClass) const {
    return false;
}

UAthenaLayoutRequirementData::UAthenaLayoutRequirementData() {
    BuildingClass = NULL;
}

