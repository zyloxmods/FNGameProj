#include "FortBadgeItemDefinition.h"

int32 UFortBadgeItemDefinition::GetUIMissionPointsOffset() const {
    return 0;
}

int32 UFortBadgeItemDefinition::GetScoreAwarded(const APlayerController* PlayerController) const {
    return 0;
}

int32 UFortBadgeItemDefinition::GetMissionPoints() const {
    return 0;
}

int32 UFortBadgeItemDefinition::GetBadgeScoreThreshold() const {
    return 0;
}

EStatCategory UFortBadgeItemDefinition::GetBadgeScoreCategory() const {
    return EStatCategory::Combat;
}

UFortBadgeItemDefinition::UFortBadgeItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    UIMissionPointsOffset = 0;
}

