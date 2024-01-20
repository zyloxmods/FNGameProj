#include "FortGameStateOutpost.h"
#include "Net/UnrealNetwork.h"

void AFortGameStateOutpost::SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo) {
}

void AFortGameStateOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateOutpost, bOutpostDefenseActive);
    DOREPLIFETIME(AFortGameStateOutpost, bWargameActive);
    DOREPLIFETIME(AFortGameStateOutpost, StormShieldDefenseType);
}

AFortGameStateOutpost::AFortGameStateOutpost() {
    this->bOutpostDefenseActive = false;
    this->bWargameActive = false;
    this->StormShieldDefenseType = EStormShieldDefense::StormShieldExpansion;
    this->IronCityLowestPlayerAccountLevel = 0;
    this->IronCityMinPowerLevel = 0.00f;
    this->IronCityMaxPowerLevel = 10000000.00f;
}

