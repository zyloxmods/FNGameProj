#include "AthenaBarrierObjective.h"
#include "Net/UnrealNetwork.h"



void AAthenaBarrierObjective::OnRep_ObjectiveDamageState() {
}

void AAthenaBarrierObjective::OnRep_HeadRotationYaw() {
}

void AAthenaBarrierObjective::OnRep_FoodTeam() {
}



void AAthenaBarrierObjective::OnGeneratorDestroyed() {
}

bool AAthenaBarrierObjective::IsFriendlyTeam() const {
    return false;
}

EBarrierObjectiveDamageState AAthenaBarrierObjective::GetObjectiveDamageState() const {
    return EBarrierObjectiveDamageState::Health_75;
}

EBarrierFoodTeam AAthenaBarrierObjective::GetFoodTeam() const {
    return EBarrierFoodTeam::Burger;
}


void AAthenaBarrierObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaBarrierObjective, FoodTeam);
    DOREPLIFETIME(AAthenaBarrierObjective, ObjectiveDamageState);
    DOREPLIFETIME(AAthenaBarrierObjective, HeadRotationYaw);
    DOREPLIFETIME(AAthenaBarrierObjective, bAllowDamage);
}

AAthenaBarrierObjective::AAthenaBarrierObjective() {
    FoodTeam = EBarrierFoodTeam::Burger;
    ObjectiveDamageState = EBarrierObjectiveDamageState::Health_75;
    HeadRotationYaw = 1;
    bAllowDamage = false;
}

