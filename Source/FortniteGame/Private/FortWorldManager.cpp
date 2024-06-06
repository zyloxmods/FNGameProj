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
    bSavingEnabled = true;
    SaveFrequency_Seconds = 0;
    bStreamInBuildings = true;
    bConstructTileWorld = false;
    bUseSimMaps = false;
    NumNonAutoconstructedTiles = 0;
    ZoneThemeForPIE = NULL;
    WorldManagerState = WMS_Created;
    TileManager = NULL;
    X_Size = 0;
    Y_Size = 0;
    Z_StructuralGrid_Size = 0;
    VerticalCellNumOffsetFromOrigin = 0;
    TileEdgeSize = 0;
    Theme = NULL;
    DefaultLootQuotaCategory = TEXT("Standard");
    MaxTiles = 0;
    bUseFixedSeed = false;
    FixedSeed = 0;
    DangerPlayerSpawnExclusionRadius = 1;
    ObjectivePlayerSpawnExclusionRadius = 1;
    CurrentWorldRecord = NULL;
    CurrentZoneRecord = NULL;
    CloudHelper = NULL;
    CurrentZoneIndex = 0;
    bHasCreatedMissions = false;
    bHasCreatedPrimaryAdditionalFoundations = false;
    bHasSpawnedActorsForMissions = false;
    bZoneCompleted = false;
    bZoneFinished = false;
    bCreatedMissionRecord = false;
    FinalNumChosenBuildingFoundations = 0;
    MaxConsecutiveFails = 0;
    bClearOutpostMapStats = true;
}

