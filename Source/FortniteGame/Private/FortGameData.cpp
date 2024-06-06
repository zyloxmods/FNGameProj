#include "FortGameData.h"

UFortGameData::UFortGameData() {
    PickupSplineOffsetRange[0] = 1;
    PickupSplineOffsetRange[1] = 1;
    PickupSplineRandomMax = 1;
    PickupSplineDropToGroundLength = 1;
    PickupMaxCollectionTime = 1;
    PickupMaxDelayPerItem = 1;
    DefaultLootInstancingRange = 1;
    QuestIndicatorData = NULL;
    QueuedAnnouncementPauseTimes[0] = 1;
    QueuedAnnouncementPauseTimes[1] = 1;
    QueuedAnnouncementPauseTimes[2] = 1;
    BuildingRetestSupportedByWorldDelay = 1;
    BuildingStructuralCollapseDelay = 1;
    BuildingStructuralCollapseDelayVariance = 1;
    BuildingStructuralCollapseCellDistAdditiveDelay = 1;
    BuildingStructuralCollapseCellDistAdditiveDelayVariance = 1;
    EditModeCancelDistance = 1;
    ResourceNames[0] = FText::FromString(TEXT("Wood"));
    ResourceNames[1] = FText::FromString(TEXT("Wood"));
    ResourceNames[2] = FText::FromString(TEXT("Wood"));
    ResourceNames[3] = FText::FromString(TEXT("Wood"));
    ResourceNames[4] = FText::FromString(TEXT("Wood"));
    BuildingTypeNames[0] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[1] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[2] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[3] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[4] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[5] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[6] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[7] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[8] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[9] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[10] = FText::FromString(TEXT("Wall"));
    BuildingTypeNames[11] = FText::FromString(TEXT("Wall"));
    CachedSurfaceRatioBySurfaceCategoryData = NULL;
    CachedSurfaceRatioByAffiliationData = NULL;
    ConversationSoundRange = 1;
}

