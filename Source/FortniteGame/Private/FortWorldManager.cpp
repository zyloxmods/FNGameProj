#include "FortWorldManager.h"
#include "Net/UnrealNetwork.h"

void AFortWorldManager::OnRep_InitialGlobalWind() {
}

void AFortWorldManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWorldManager, InitialGlobalWind);
    DOREPLIFETIME(AFortWorldManager, FinalNumChosenBuildingFoundations);
    DOREPLIFETIME(AFortWorldManager, ChosenBuildingFoundations);
}

AFortWorldManager::AFortWorldManager() {
    this->bSavingEnabled = true;
    this->SaveFrequency_Seconds = 0;
    this->bStreamInBuildings = true;
    this->bConstructTileWorld = false;
    this->bUseSimMaps = false;
    this->NumNonAutoconstructedTiles = 0;
    this->ZoneThemeForPIE = NULL;
    this->WorldManagerState = WMS_Created;
    this->TileManager = NULL;
    this->X_Size = 0;
    this->Y_Size = 0;
    this->Z_StructuralGrid_Size = 0;
    this->VerticalCellNumOffsetFromOrigin = 0;
    this->TileEdgeSize = 0;
    this->Theme = NULL;
    this->DefaultLootQuotaCategory = TEXT("Standard");
    this->MaxTiles = 0;
    this->bUseFixedSeed = false;
    this->FixedSeed = 0;
    this->DangerPlayerSpawnExclusionRadius = 1;
    this->ObjectivePlayerSpawnExclusionRadius = 1;
    this->CurrentWorldRecord = NULL;
    this->CurrentZoneRecord = NULL;
    this->CloudHelper = NULL;
    this->CurrentZoneIndex = 0;
    this->bHasCreatedMissions = false;
    this->bHasCreatedPrimaryAdditionalFoundations = false;
    this->bHasSpawnedActorsForMissions = false;
    this->bZoneCompleted = false;
    this->bZoneFinished = false;
    this->bCreatedMissionRecord = false;
    this->FinalNumChosenBuildingFoundations = 0;
    this->MaxConsecutiveFails = 0;
    this->bClearOutpostMapStats = true;
}

