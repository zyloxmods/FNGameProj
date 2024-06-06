#include "AthenaBarrierFlag.h"
#include "Net/UnrealNetwork.h"


void AAthenaBarrierFlag::OnRep_FoodTeam() {
}

void AAthenaBarrierFlag::OnRep_CurrentState() {
}


AAthenaBarrierObjective* AAthenaBarrierFlag::GetObjectiveActor_Implementation() const {
    return NULL;
}

FVector AAthenaBarrierFlag::GetMeshScale() const {
    return FVector{};
}

UStaticMesh* AAthenaBarrierFlag::GetHeadMesh() const {
    return NULL;
}



void AAthenaBarrierFlag::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaBarrierFlag, CurrentState);
    DOREPLIFETIME(AAthenaBarrierFlag, FoodTeam);
}

AAthenaBarrierFlag::AAthenaBarrierFlag() {
    CurrentState = EBarrierFlagState::FlagUp;
    FoodTeam = EBarrierFoodTeam::Burger;
}

