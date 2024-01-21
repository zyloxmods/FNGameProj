#include "BuildingLayoutRequirement.h"
#include "Net/UnrealNetwork.h"

bool ABuildingLayoutRequirement::SupportsEditingOfOccupant() const {
    return false;
}

void ABuildingLayoutRequirement::SetRequirementVisible(bool bVisible) {
}

void ABuildingLayoutRequirement::SetRequiredResourceType(EFortResourceType DesiredResourceType) {
}

void ABuildingLayoutRequirement::OnRequirementSatisfyingActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void ABuildingLayoutRequirement::OnRep_RequirementStatus() {
}

void ABuildingLayoutRequirement::DeactivateRequirement() {
}

void ABuildingLayoutRequirement::ActivateRequirement(bool bMakeVisible) {
}

void ABuildingLayoutRequirement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingLayoutRequirement, bRequirementSatisfied);
    DOREPLIFETIME(ABuildingLayoutRequirement, RequirementStatus);
}

ABuildingLayoutRequirement::ABuildingLayoutRequirement() {
    this->LayoutRequirementSMActorClass = NULL;
    this->bIgnoreResourceTypeRequirements = false;
    this->bMakeSatisfyingActorIndestructibleWhileRequirementExists = false;
    this->bNeedToInitializeRequirementStatus = false;
    this->bRequirementSatisfied = false;
    this->RequirementStatus = ELayoutRequirementStatus::Inactive_Invisible;
    this->OverrideResourceType = EFortResourceType::None;
    this->bAllowAnyPattern = false;
    this->bAllowOccupantPatternEditing = false;
    this->LayoutDisplayMID = NULL;
}

