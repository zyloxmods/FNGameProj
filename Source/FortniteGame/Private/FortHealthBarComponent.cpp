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
    BuildingActorOwner = NULL;
    DisplayText = FText::FromString(TEXT("Health"));
    bIsHealthBarVisible = true;
    MaxDistance = 1;
    ScaleOverDistanceCurve = NULL;
    bClampToScreen = false;
    bShowClampToScreenArrow = false;
    HealthBarColorCurve = NULL;
}

