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
    LayoutRequirementSMActorClass = NULL;
    bIgnoreResourceTypeRequirements = false;
    bMakeSatisfyingActorIndestructibleWhileRequirementExists = false;
    bNeedToInitializeRequirementStatus = false;
    bRequirementSatisfied = false;
    RequirementStatus = ELayoutRequirementStatus::Inactive_Invisible;
    OverrideResourceType = EFortResourceType::None;
    bAllowAnyPattern = false;
    bAllowOccupantPatternEditing = false;
    LayoutDisplayMID = NULL;
}

