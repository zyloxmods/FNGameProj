#include "FortGameData.h"

int32 UFortGameData::GetXpPerAccountLevel() {
    return 0;
}

float UFortGameData::GetTeamXpBoost() {
    return 0.0f;
}

TSoftObjectPtr<UFortTeamPerkItemDefinition> UFortGameData::GetRecruitmentRewardForHero(UFortHeroType* Hero) {
    return NULL;
}

float UFortGameData::GetPersonalXpBoost() {
    return 0.0f;
}

UFortGameData::UFortGameData() {
    this->PickupSplineOffsetRange[0] = 150.00f;
    this->PickupSplineOffsetRange[1] = 150.00f;
    this->PickupSplineRandomMax = 1.25f;
    this->PickupSplineDropToGroundLength = 0.80f;
    this->PickupMaxCollectionTime = 4.00f;
    this->PickupMaxDelayPerItem = 0.30f;
    this->AutoEquipTags.AddDefaulted(3);
    this->ScoreDisplayFactor = 0.01f;
    this->ScoreDivisor = 900000;
    this->XPMult = 1000;
    this->GroupScoreRates[0] = 1.00f;
    this->GroupScoreRates[1] = 1.00f;
    this->GroupScoreRates[2] = 1.00f;
    this->GroupScoreRates[3] = 1.00f;
    this->GroupScoreRates[4] = 1.00f;
    this->ScoreToXPLinearRate = 1.00f;
    this->LinearEnd = 1;
    this->XpPerAccountLevel = 0;
    this->CriticalMatch_XpBonusPercent = 0.20f;
    this->PersonalBoost_XpBonusPercent = 0.30f;
    this->GroupBoost_XpBonusPercent = 0.05f;
    this->GroupBoost_BuffMultiplier = 2.00f;
    this->Rest_XpBonusPercent = 1.00f;
    this->LowXpConningValue = 0.00f;
    this->VeryLowXpConningValue = 0.00f;
    this->NoXpConningValue = 0.00f;
    this->MaxCraftQueueSize = 20;
    this->DefaultLootInstancingRange = 6144.00f;
    this->AIDirectorIndex = 0;
    this->AlternateBalanceAIDirectorIndex = -1;
    this->SquadMemberStatBonusMultiplier = 0.10f;
    this->DailyMissionAlertQuota = 0;
    this->CachedScoreMultiplierDataTable = NULL;
    this->QueuedAnnouncementPauseTimes[0] = 0.00f;
    this->QueuedAnnouncementPauseTimes[1] = 0.00f;
    this->QueuedAnnouncementPauseTimes[2] = 0.00f;
    this->BuildingStructuralCollapseDelay = 0.25f;
    this->BuildingStructuralCollapseDelayVariance = 0.00f;
    this->BuildingStructuralCollapseCellDistAdditiveDelay = 0.10f;
    this->BuildingStructuralCollapseCellDistAdditiveDelayVariance = 0.00f;
    this->EditModeCancelDistance = 750.00f;
    this->FORTAttributeToPowerMultiplier = 0.00f;
    this->ResourceNames[0] = FText::FromString(TEXT("Wood"));
    this->ResourceNames[1] = FText::FromString(TEXT("Wood"));
    this->ResourceNames[2] = FText::FromString(TEXT("Wood"));
    this->ResourceNames[3] = FText::FromString(TEXT("Wood"));
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
}

