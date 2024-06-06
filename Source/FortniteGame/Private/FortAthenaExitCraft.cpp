#include "FortAthenaExitCraft.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaExitCraft::OnRep_VehicleSkinIndex() {
}

void AFortAthenaExitCraft::OnRep_RotationLerpData() {
}

void AFortAthenaExitCraft::OnRep_QualifyingPlayers() {
}

void AFortAthenaExitCraft::OnRep_LocationLerpData() {
}

void AFortAthenaExitCraft::OnRep_CurrentState() {
}

void AFortAthenaExitCraft::OnRep_BalloonActor() {
}


void AFortAthenaExitCraft::OnOverlapStart(AActor* TestActor) {
}

void AFortAthenaExitCraft::OnOverlapEnd(AActor* TestActor) {
}




void AFortAthenaExitCraft::OnDepartFinished() {
}


void AFortAthenaExitCraft::CheatDepart() {
}

void AFortAthenaExitCraft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaExitCraft, ExitCraftInfo);
    DOREPLIFETIME(AFortAthenaExitCraft, CurrentState);
    DOREPLIFETIME(AFortAthenaExitCraft, OverlappingPawns);
    DOREPLIFETIME(AFortAthenaExitCraft, BalloonActor);
    DOREPLIFETIME(AFortAthenaExitCraft, VehicleSkinIndex);
    DOREPLIFETIME(AFortAthenaExitCraft, LocationLerpData);
    DOREPLIFETIME(AFortAthenaExitCraft, RotationLerpData);
}

AFortAthenaExitCraft::AFortAthenaExitCraft() {
    MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp0"));
    OverlapMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OverlapMesh_0"));
    ExitCraftInfo = NULL;
    CurrentState = EExitCraftState::None;
    BalloonClass = NULL;
    BalloonActor = NULL;
    FortVehicleConfigClass = NULL;
    GettingIntoPostionCurve_Location = NULL;
    GettingIntoPostionCurve_Rotation = NULL;
    BuildingZOffset = 1;
    SafetyTimerTime = 1;
    VehicleSkinIndex = 0;
}

