#include "BuildingPropBigHealth.h"
#include "Net/UnrealNetwork.h"

void ABuildingPropBigHealth::SetBigHealthMax(int64 NewHealth) {
}

void ABuildingPropBigHealth::SetBigHealth(int64 NewHealth) {
}

void ABuildingPropBigHealth::OnRep_BigHealth() {
}

FText ABuildingPropBigHealth::GetHealthValueText() {
    return FText::GetEmpty();
}

float ABuildingPropBigHealth::GetHealthValuePercent() {
    return 0.0f;
}

void ABuildingPropBigHealth::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingPropBigHealth, BigHealth);
    DOREPLIFETIME(ABuildingPropBigHealth, BigHealthMax);
}

ABuildingPropBigHealth::ABuildingPropBigHealth() {
    BigHealth = 0;
    BigHealthMax = 0;
    bShowHealthBar = true;
}

