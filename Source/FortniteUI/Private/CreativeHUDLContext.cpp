#include "CreativeHUDLContext.h"

void UCreativeHUDLContext::OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UCreativeHUDLContext::OnPlayerPawnSet() {
}

void UCreativeHUDLContext::OnPlayerControllerSet() {
}

EScaleAxis UCreativeHUDLContext::GetScaleAxis() const {
    return EScaleAxis::All;
}

FRotator UCreativeHUDLContext::GetRotationAxis() const {
    return FRotator{};
}

void UCreativeHUDLContext::GetPrecisionLevel(bool& SnappingEnabled, uint8& GridSnappingIndex) const {
}

AFortPlayerPawn* UCreativeHUDLContext::GetOwningPlayerPawn() const {
    return NULL;
}

bool UCreativeHUDLContext::GetDropToFloorEnabled() const {
    return false;
}

EHitTraceRule UCreativeHUDLContext::GetCurrentHitTraceRule() const {
    return EHitTraceRule::Visibility;
}

void UCreativeHUDLContext::ForwardOnScaleAxisChanged(EScaleAxis Axis) {
}

void UCreativeHUDLContext::ForwardOnRotationAxisChanged(uint8 AxisIndex) {
}

void UCreativeHUDLContext::ForwardOnPrecisionChanged(bool bPrecisionOn, uint8 GridSnapIndex) {
}

void UCreativeHUDLContext::ForwardOnLOSChanged(EHitTraceRule HitTraceRule) {
}

void UCreativeHUDLContext::ForwardOnDropToFloorChanged(bool bDropToFloorOn) {
}

void UCreativeHUDLContext::ForwardOnCreativeQuickbarSlotContentChanged(int32 SlotIndex, bool bIsEnabled) {
}

void UCreativeHUDLContext::ForwardOnCreativeQuickbarEnabledChanged(bool bIsEnabled) {
}

void UCreativeHUDLContext::ForwardOnCreativeModeEnabledChanged(bool bIsEnabled) {
}

void UCreativeHUDLContext::ForwardOnCreativeGhostChanged(bool bIsGhostEnabled) {
}

bool UCreativeHUDLContext::DoesCreativeQuickbarSlotHaveContent(int32 SlotIndex) const {
    return false;
}

UCreativeHUDLContext::UCreativeHUDLContext() {
    this->CurrentMoveTool = NULL;
}

