#include "BuildingTrapDefender.h"
#include "Net/UnrealNetwork.h"

UFortWorldItem* ABuildingTrapDefender::TakeWeaponAwayFromDefender(UFortWorldItem* WeaponToTakeAway) {
    return NULL;
}

void ABuildingTrapDefender::SupplyDefender(const UFortWorldItem* WeaponToGive, const int32 AmmoQuantity) {
}

AFortAIPawn* ABuildingTrapDefender::SpawnDefenderfromItem(UFortAccountItem* DefenderItem, const FName DefenderSquadId, const FTransform& SpawnTransform, AActor* InOwner) {
    return NULL;
}




FText ABuildingTrapDefender::GetLastInteractErrorText() {
    return FText::GetEmpty();
}




void ABuildingTrapDefender::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingTrapDefender, DefenderPawn);
    DOREPLIFETIME(ABuildingTrapDefender, DefenderItemDefinition);
    DOREPLIFETIME(ABuildingTrapDefender, DefenderItemLevel);
}

ABuildingTrapDefender::ABuildingTrapDefender() {
    LastInteractError = EFortDefenderInteractionError::None;
    DefenderPawn = NULL;
    DefenderItemDefinition = NULL;
    DefenderItemLevel = 0;
}

