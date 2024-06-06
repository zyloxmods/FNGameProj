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
    bOutpostDefenseActive = false;
    bWargameActive = false;
    StormShieldDefenseType = EStormShieldDefense::NotSSD;
    bOutpostStatusAllowsMissionStart = false;
    IronCityLowestPlayerAccountLevel = 0;
    IronCityMinPowerLevel = 1;
    IronCityMaxPowerLevel = 1;
    PlayerWeaponSkillLevel = 1;
}

