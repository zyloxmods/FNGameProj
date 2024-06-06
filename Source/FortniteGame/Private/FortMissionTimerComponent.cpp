#include "FortMissionTimerComponent.h"
#include "Net/UnrealNetwork.h"

void UFortMissionTimerComponent::UnpauseMissionTimer() {
}

void UFortMissionTimerComponent::SetTimerVisibilityOverrideToShowAtEnd(float ShowTime) {
}

void UFortMissionTimerComponent::SetTimerVisibilityOverrideSetting(TEnumAsByte<ETimerOverrideSetting::Type> NewVisibilitySetting) {
}

void UFortMissionTimerComponent::SetTimerLabelText(FText NewLabelText) {
}

void UFortMissionTimerComponent::SetTimerDisplayFormat(bool bNewDisplayInTimeFormat) {
}

void UFortMissionTimerComponent::SetMissionTimer(const FString& FunctionName, float TimerLength, AActor* CallbackActor) {
}

void UFortMissionTimerComponent::SetMissionTimeElapsedTimer() {
}

void UFortMissionTimerComponent::ResetMissionTimer() {
}

void UFortMissionTimerComponent::PauseMissionTimer() {
}

void UFortMissionTimerComponent::OnRep_TimerVisibilityOverride() {
}

void UFortMissionTimerComponent::OnRep_TimerData() {
}

bool UFortMissionTimerComponent::IsTimerVisible() const {
    return false;
}

bool UFortMissionTimerComponent::IsMissionTimerSet() const {
    return false;
}

bool UFortMissionTimerComponent::IsMissionTimerPaused() const {
    return false;
}

FText UFortMissionTimerComponent::GetTimeText() const {
    return FText::GetEmpty();
}

FText UFortMissionTimerComponent::GetTimerLabelText() const {
    return FText::GetEmpty();
}

float UFortMissionTimerComponent::GetNormalizedTime() const {
    return 0.0f;
}

float UFortMissionTimerComponent::GetMissionTimerTimeRemaining() const {
    return 0.0f;
}

float UFortMissionTimerComponent::GetMissionTimerTimeElapsed() const {
    return 0.0f;
}

FMissionTimeDisplayData UFortMissionTimerComponent::GetCorrectTimeDisplayData() const {
    return FMissionTimeDisplayData{};
}

void UFortMissionTimerComponent::DummyTimer() {
}

void UFortMissionTimerComponent::ClearMissionTimer() {
}

void UFortMissionTimerComponent::AddOrRemoveTime(float TimeToAdd) {
}

void UFortMissionTimerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortMissionTimerComponent, TimerData);
    DOREPLIFETIME(UFortMissionTimerComponent, TimerLabelText);
    DOREPLIFETIME(UFortMissionTimerComponent, bDisplayInTimeFormat);
    DOREPLIFETIME(UFortMissionTimerComponent, TimerVisibilityOverrideSetting);
    DOREPLIFETIME(UFortMissionTimerComponent, TimerVisibilityShowAtEndTime);
}

UFortMissionTimerComponent::UFortMissionTimerComponent() {
    bShowTimeElapsed = false;
    bUpdateQuestsTimeElapsed = false;
    TimerLabelText = FText::FromString(TEXT("Time Remaining"));
    bDisplayInTimeFormat = true;
    TimerVisibilityOverrideSetting = ETimerOverrideSetting::DefaultBehavior;
    TimerVisibilityShowAtEndTime = 1;
}

