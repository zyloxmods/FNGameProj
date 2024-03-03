#include "FortGameStateOutpost.h"
#include "Net/UnrealNetwork.h"

void AFortGameStateOutpost::SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo) {
}

void AFortGameStateOutpost::OnRep_PlayerWeaponSkillLevel() {
}

bool AFortGameStateOutpost::DoesOutpostStatusAllowMissionStart() const {
    return false;
}

void AFortGameStateOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStateOutpost, bOutpostDefenseActive);
    DOREPLIFETIME(AFortGameStateOutpost, bWargameActive);
    DOREPLIFETIME(AFortGameStateOutpost, StormShieldDefenseType);
    DOREPLIFETIME(AFortGameStateOutpost, bOutpostStatusAllowsMissionStart);
    DOREPLIFETIME(AFortGameStateOutpost, PlayerWeaponSkillLevel);
}

AFortGameStateOutpost::AFortGameStateOutpost() {
    this->bOutpostDefenseActive = false;
    this->bWargameActive = false;
    this->StormShieldDefenseType = EStormShieldDefense::NotSSD;
    this->bOutpostStatusAllowsMissionStart = false;
    this->IronCityLowestPlayerAccountLevel = 0;
    this->IronCityMinPowerLevel = 1;
    this->IronCityMaxPowerLevel = 1;
    this->PlayerWeaponSkillLevel = 1;
}

