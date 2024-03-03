#include "FortAthenaAILODComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAthenaAILODComponent::OnRep_CurrentFortAILODLevel() {
}

void UFortAthenaAILODComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaAILODComponent, CurrentFortAILODLevel);
    DOREPLIFETIME(UFortAthenaAILODComponent, bCouldBeVisibleToPlayers);
}

UFortAthenaAILODComponent::UFortAthenaAILODComponent() {
    this->CurrentFortAILODLevel = EFortAILODLevel::MIN;
    this->bCouldBeVisibleToPlayers = false;
    this->CachedFortPawn = NULL;
    this->AILODSettingsContainer = NULL;
}

