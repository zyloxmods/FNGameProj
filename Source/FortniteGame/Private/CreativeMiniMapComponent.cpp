#include "CreativeMiniMapComponent.h"
#include "Net/UnrealNetwork.h"

void UCreativeMiniMapComponent::SetIndicatorTextOffset(const FVector2D& IndicatorTextOffset) {
}

void UCreativeMiniMapComponent::SetIndicatorTextColor(const FLinearColor& IndicatorTextColor) {
}

void UCreativeMiniMapComponent::SetIndicatorText(const FText& IndicatorText) {
}

void UCreativeMiniMapComponent::OnRep_IconData() {
}

void UCreativeMiniMapComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCreativeMiniMapComponent, IndicatorTextProperties);
    DOREPLIFETIME(UCreativeMiniMapComponent, IconData);
}

UCreativeMiniMapComponent::UCreativeMiniMapComponent() {
    IconList = NULL;
}

