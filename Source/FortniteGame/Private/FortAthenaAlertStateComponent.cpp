#include "FortAthenaAlertStateComponent.h"
#include "Net/UnrealNetwork.h"

void UFortAthenaAlertStateComponent::SetStealthMeterTargetTime(const float InStealthMeterTargetTime) {
}

void UFortAthenaAlertStateComponent::SetStealthMeterTarget(const float InStealthMeterTarget) {
}

void UFortAthenaAlertStateComponent::OnStealthMeterChanged(AFortAthenaAIBotController* BotController, float NewStealthMeterTarget, float NewStealthMeterTargetTime) {
}

float UFortAthenaAlertStateComponent::GetStealthMeterTargetTime() const {
    return 0.0f;
}

float UFortAthenaAlertStateComponent::GetStealthMeterTarget() const {
    return 0.0f;
}

void UFortAthenaAlertStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortAthenaAlertStateComponent, StealthMeterTarget);
    DOREPLIFETIME(UFortAthenaAlertStateComponent, StealthMeterTargetTime);
}

UFortAthenaAlertStateComponent::UFortAthenaAlertStateComponent() {
    this->StealthMeterTarget = 1;
    this->StealthMeterTargetTime = 1;
}

