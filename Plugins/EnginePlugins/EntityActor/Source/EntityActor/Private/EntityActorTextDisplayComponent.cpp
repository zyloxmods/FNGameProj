#include "EntityActorTextDisplayComponent.h"

void UEntityActorTextDisplayComponent::SetWorldSize(float Value) {
}

void UEntityActorTextDisplayComponent::SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value) {
}

void UEntityActorTextDisplayComponent::SetTextRenderColor(FColor Value) {
}

void UEntityActorTextDisplayComponent::SetText(FText Text) {
}

void UEntityActorTextDisplayComponent::SetRelativeScale(FVector RelativeScale) {
}

void UEntityActorTextDisplayComponent::SetRelativeRotation(FRotator RelativeRotation) {
}

void UEntityActorTextDisplayComponent::SetRelativeLocation(FVector RelativeLocation) {
}

void UEntityActorTextDisplayComponent::SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value) {
}

float UEntityActorTextDisplayComponent::GetWorldSize() const {
    return 0.0f;
}

TEnumAsByte<EVerticalTextAligment> UEntityActorTextDisplayComponent::GetVerticalAlignment() {
    return EVRTA_TextTop;
}

FColor UEntityActorTextDisplayComponent::GetTextRenderColor() const {
    return FColor{};
}

FText UEntityActorTextDisplayComponent::GetText() const {
    return FText::GetEmpty();
}

FVector UEntityActorTextDisplayComponent::GetRelativeLocation() {
    return FVector{};
}

TEnumAsByte<EHorizTextAligment> UEntityActorTextDisplayComponent::GetHorizontalAlignment() {
    return EHTA_Left;
}

UEntityActorTextDisplayComponent::UEntityActorTextDisplayComponent() {
}

