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
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComp0"));
    this->OverlapMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OverlapMesh_0"));
    this->ExitCraftInfo = NULL;
    this->CurrentState = EExitCraftState::None;
    this->BalloonClass = NULL;
    this->BalloonActor = NULL;
    this->FortVehicleConfigClass = NULL;
    this->GettingIntoPostionCurve_Location = NULL;
    this->GettingIntoPostionCurve_Rotation = NULL;
    this->BuildingZOffset = 80.00f;
    this->SafetyTimerTime = 10.00f;
    this->VehicleSkinIndex = -1;
}

