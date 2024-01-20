#include "FortTeamInfoPvPBaseDestruction.h"
#include "Net/UnrealNetwork.h"

void AFortTeamInfoPvPBaseDestruction::OnRep_TeamLevel() {
}

void AFortTeamInfoPvPBaseDestruction::OnRep_TeamFOBCoreBuildingActors() {
}

void AFortTeamInfoPvPBaseDestruction::OnRep_TeamExperience() {
}

void AFortTeamInfoPvPBaseDestruction::OnRep_AllFOBCoresLoaded() {
}

void AFortTeamInfoPvPBaseDestruction::GetTeamFOBCoresAndSpawnTags(TArray<ABuildingFOBCoreActor*>& OutFOBCores, TArray<FGameplayTagContainer>& OutFOBSpawnTags) {
}

void AFortTeamInfoPvPBaseDestruction::GetTeamFOBCores(TArray<ABuildingFOBCoreActor*>& OutFOBCores) {
}

AFortPvPBaseCornerstone* AFortTeamInfoPvPBaseDestruction::GetTeamCornerstone() const {
    return NULL;
}

AStrategicBuildingActor* AFortTeamInfoPvPBaseDestruction::GetStrategicBuildingActor(const FTeamStrategicBuildingHandle& Handle) const {
    return NULL;
}

void AFortTeamInfoPvPBaseDestruction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTeamInfoPvPBaseDestruction, TeamCornerstone);
    DOREPLIFETIME(AFortTeamInfoPvPBaseDestruction, TeamStrategicBuildingActors);
    DOREPLIFETIME(AFortTeamInfoPvPBaseDestruction, TeamFOBCoreBuildingActors);
    DOREPLIFETIME(AFortTeamInfoPvPBaseDestruction, bAllFOBCoresLoaded);
    DOREPLIFETIME(AFortTeamInfoPvPBaseDestruction, TeamLevel);
    DOREPLIFETIME(AFortTeamInfoPvPBaseDestruction, TeamExperience);
}

AFortTeamInfoPvPBaseDestruction::AFortTeamInfoPvPBaseDestruction() {
    this->TeamCornerstone = NULL;
    this->bAllFOBCoresLoaded = false;
    this->StrategicBuildingHandleGenerator = 0;
    this->TeamLevel = 1;
    this->TeamExperience = 0;
}

