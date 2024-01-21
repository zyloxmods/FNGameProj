#include "FortHealthBarComponent.h"
#include "Net/UnrealNetwork.h"

void UFortHealthBarComponent::SetHealthBarWidgetVisibility(bool bIsVisible) {
}

void UFortHealthBarComponent::SetHealthBarVisibility(bool bNewVisibleState) {
}

void UFortHealthBarComponent::SetHealthBarDisplayText(FText NewDisplayText) {
}

void UFortHealthBarComponent::OnRep_IsVisible() {
}

void UFortHealthBarComponent::OnRep_DisplayText() {
}

FText UFortHealthBarComponent::GetHealthBarDisplayText() const {
    return FText::GetEmpty();
}

void UFortHealthBarComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortHealthBarComponent, DisplayText);
    DOREPLIFETIME(UFortHealthBarComponent, bIsHealthBarVisible);
}

UFortHealthBarComponent::UFortHealthBarComponent() {
    this->BuildingActorOwner = NULL;
    this->DisplayText = FText::FromString(TEXT("Health"));
    this->bIsHealthBarVisible = true;
    this->MaxDistance = 10000.00f;
    this->ScaleOverDistanceCurve = NULL;
    this->bClampToScreen = false;
    this->bShowClampToScreenArrow = false;
    this->HealthBarColorCurve = NULL;
}

