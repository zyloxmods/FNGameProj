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
    this->bEnabled = true;
    this->MinimumDisplayTime = 1;
    this->UpdateTime = 1;
    this->InitialDelay = 1;
}

