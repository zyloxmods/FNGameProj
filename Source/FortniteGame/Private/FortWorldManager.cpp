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
    this->SaveFrequency_Seconds = 90;
    this->bStreamInBuildings = true;
    this->bConstructTileWorld = false;
    this->bUseSimMaps = false;
    this->NumNonAutoconstructedTiles = 4;
    this->ZoneThemeForPIE = NULL;
    this->WorldManagerState = WMS_Created;
    this->TileManager = NULL;
    this->X_Size = 10;
    this->Y_Size = 10;
    this->Z_StructuralGrid_Size = 60;
    this->VerticalCellNumOffsetFromOrigin = -20;
    this->TileEdgeSize = 25;
    this->Theme = NULL;
    this->DefaultLootQuotaCategory = TEXT("Standard");
    this->MaxTiles = 16;
    this->bUseFixedSeed = false;
    this->FixedSeed = 0;
    this->DangerPlayerSpawnExclusionRadius = 512.00f;
    this->ObjectivePlayerSpawnExclusionRadius = 512.00f;
    this->CurrentWorldRecord = NULL;
    this->CurrentZoneRecord = NULL;
    this->CloudHelper = NULL;
    this->CurrentZoneIndex = -1;
    this->bHasCreatedMissions = false;
    this->bHasCreatedPrimaryAdditionalFoundations = false;
    this->bHasSpawnedActorsForMissions = false;
    this->bZoneCompleted = false;
    this->bZoneFinished = false;
    this->bCreatedMissionRecord = false;
    this->FinalNumChosenBuildingFoundations = -1;
    this->MaxConsecutiveFails = 20;
}

