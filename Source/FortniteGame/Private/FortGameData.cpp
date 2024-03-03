#include "FortGameData.h"

UFortGameData::UFortGameData() {
    this->PickupSplineOffsetRange[0] = 1;
    this->PickupSplineOffsetRange[1] = 1;
    this->PickupSplineRandomMax = 1;
    this->PickupSplineDropToGroundLength = 1;
    this->PickupMaxCollectionTime = 1;
    this->PickupMaxDelayPerItem = 1;
    this->DefaultLootInstancingRange = 1;
    this->QuestIndicatorData = NULL;
    this->QueuedAnnouncementPauseTimes[0] = 1;
    this->QueuedAnnouncementPauseTimes[1] = 1;
    this->QueuedAnnouncementPauseTimes[2] = 1;
    this->BuildingRetestSupportedByWorldDelay = 1;
    this->BuildingStructuralCollapseDelay = 1;
    this->BuildingStructuralCollapseDelayVariance = 1;
    this->BuildingStructuralCollapseCellDistAdditiveDelay = 1;
    this->BuildingStructuralCollapseCellDistAdditiveDelayVariance = 1;
    this->EditModeCancelDistance = 1;
    this->ResourceNames[0] = FText::FromString(TEXT("Wood"));
    this->ResourceNames[1] = FText::FromString(TEXT("Wood"));
    this->ResourceNames[2] = FText::FromString(TEXT("Wood"));
    this->ResourceNames[3] = FText::FromString(TEXT("Wood"));
    this->ResourceNames[4] = FText::FromString(TEXT("Wood"));
    this->BuildingTypeNames[0] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[1] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[2] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[3] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[4] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[5] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[6] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[7] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[8] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[9] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[10] = FText::FromString(TEXT("Wall"));
    this->BuildingTypeNames[11] = FText::FromString(TEXT("Wall"));
    this->CachedSurfaceRatioBySurfaceCategoryData = NULL;
    this->CachedSurfaceRatioByAffiliationData = NULL;
    this->ConversationSoundRange = 1;
}

