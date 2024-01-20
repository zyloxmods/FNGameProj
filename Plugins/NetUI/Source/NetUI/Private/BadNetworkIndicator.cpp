#include "BadNetworkIndicator.h"


bool UBadNetworkIndicator::ShouldDisplay() const {
    return false;
}

bool UBadNetworkIndicator::HasSeverePing() const {
    return false;
}

bool UBadNetworkIndicator::HasSeverePacketLoss() const {
    return false;
}

bool UBadNetworkIndicator::HasBadPing() const {
    return false;
}

bool UBadNetworkIndicator::HasBadPacketLoss() const {
    return false;
}

float UBadNetworkIndicator::GetPing() const {
    return 0.0f;
}

float UBadNetworkIndicator::GetPacketLoss() const {
    return 0.0f;
}

UBadNetworkIndicator::UBadNetworkIndicator() : UUserWidget(FObjectInitializer::Get()) {
    this->BadPingThreshold = 200.00f;
    this->SeverePingThreshold = 500.00f;
    this->BadPacketLossThreshold = 0.05f;
    this->SeverePacketLossThreshold = 0.15f;
    this->bEnabled = true;
    this->MinimumDisplayTime = 10.00f;
    this->UpdateTime = 1.00f;
    this->InitialDelay = 10.00f;
}

