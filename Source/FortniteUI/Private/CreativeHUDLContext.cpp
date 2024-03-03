#include "CreativeHUDLContext.h"

void UCreativeHUDLContext::OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon) {
}

void UCreativeHUDLContext::OnPlayerPawnSet() {
}

void UCreativeHUDLContext::OnPlayerControllerSet() {
}

void UCreativeHUDLContext::OnCreativeQuickbarComponentLoaded() {
}

bool UCreativeHUDLContext::IsPropLockedInPlace() const {
    return false;
}

void UCreativeHUDLContext::HandleOnCreativeModeEnabledChanged(bool bIsEnabled) {
}

EScaleAxis UCreativeHUDLContext::GetScaleAxis() const {
    return EScaleAxis::All;
}

FRotator UCreativeHUDLContext::GetRotationAxis() const {
    return FRotator{};
}

void UCreativeHUDLContext::GetPrecisionLevel(bool& SnappingEnabled, uint8& GridSnappingIndex) const {
}

AFortPlayerState* UCreativeHUDLContext::GetOwningPlayerState() const {
    return NULL;
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

UDataTable* UCreativeHUDLContext::GetCreativeItemListSourceFromPlaylist() const {
    return NULL;
}

void UCreativeHUDLContext::ForwardOnScaleAxisChanged(EScaleAxis Axis) {
}

void UCreativeHUDLContext::ForwardOnRotationAxisChanged(uint8 AxisIndex) {
}

void UCreativeHUDLContext::ForwardOnPropLockedInPlacedChanged(bool bLockedInPlace) {
}

void UCreativeHUDLContext::ForwardOnPrecisionChanged(bool bPrecisionOn, uint8 GridSnapIndex) {
}

void UCreativeHUDLContext::ForwardOnMoveToolScaleModified(FVector currentVector) {
}

void UCreativeHUDLContext::ForwardOnMoveToolRotationModified(FQuat currentRotationOffset) {
}

void UCreativeHUDLContext::ForwardOnLOSChanged(EHitTraceRule HitTraceRule) {
}

void UCreativeHUDLContext::ForwardOnDropToFloorChanged(bool bDropToFloorOn) {
}

void UCreativeHUDLContext::ForwardOnCreativeQuickMenuDisplayedChanged(bool bIsDisplayed) {
}

void UCreativeHUDLContext::ForwardOnCreativeQuickbarEquippedChanged(bool bIsEquipped) {
}

void UCreativeHUDLContext::ForwardOnCreativeQuickbarEnabledChanged(bool bIsEnabled) {
}

void UCreativeHUDLContext::ForwardOnCreativeQuickbarActiveChanged(bool bIsActive) {
}

void UCreativeHUDLContext::ForwardOnCreativeHeatmapTogged(bool bIsHeatmapToggled) {
}

void UCreativeHUDLContext::ForwardOnCreativeGhostChanged(bool bIsGhostEnabled) {
}

UCreativeHUDLContext::UCreativeHUDLContext() {
    this->CurrentMoveTool = NULL;
    this->bPropLockedInPlace = false;
}

