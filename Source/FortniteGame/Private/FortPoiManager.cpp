#include "FortPoiManager.h"
#include "Net/UnrealNetwork.h"

void AFortPoiManager::OnRep_PoiTagContainerTable() {
}

void AFortPoiManager::OnRep_PoiGridForDebugDisplay() {
}

void AFortPoiManager::OnRep_FortPoiGridInfo() {
}

void AFortPoiManager::ClientsideMinimalInitPostEventsReady(const TArray<FString>& NewEvents) {
}

void AFortPoiManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPoiManager, FortPoiGridInfo);
    DOREPLIFETIME(AFortPoiManager, PoiTagContainerTable);
    DOREPLIFETIME(AFortPoiManager, PoiTagContainerTableSize);
    DOREPLIFETIME(AFortPoiManager, PoiGridForDebugDisplay);
}

AFortPoiManager::AFortPoiManager() {
    TestPlayerIndex = 0;
    POIsExcludedFromBeginGolden.AddDefaulted(1);
    MaxNumTestsPerFrame = 0;
    PoiTagContainerTableSize = 0;
    bIsReinitializingGrid = false;
    bHasInitalized = false;
    PoiGridPrevSizeForDebugDisplay = 0;
}

