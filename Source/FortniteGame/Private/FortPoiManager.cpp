#include "FortPoiManager.h"
#include "Net/UnrealNetwork.h"

void AFortPoiManager::OnRep_PoiTagContainerTable() {
}

void AFortPoiManager::OnRep_PoiGridForDebugDisplay() {
}

void AFortPoiManager::OnRep_FortPoiGridInfo() {
}

void AFortPoiManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPoiManager, FortPoiGridInfo);
    DOREPLIFETIME(AFortPoiManager, PoiTagContainerTable);
    DOREPLIFETIME(AFortPoiManager, PoiTagContainerTableSize);
    DOREPLIFETIME(AFortPoiManager, PoiGridForDebugDisplay);
}

AFortPoiManager::AFortPoiManager() {
    this->TestPlayerIndex = 0;
    this->MaxNumTestsPerFrame = 5;
    this->PoiTagContainerTableSize = -1;
    this->bHasInitalized = false;
    this->PoiGridPrevSizeForDebugDisplay = 0;
}

