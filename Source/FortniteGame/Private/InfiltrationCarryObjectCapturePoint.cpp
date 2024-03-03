#include "InfiltrationCarryObjectCapturePoint.h"
#include "Net/UnrealNetwork.h"

void AInfiltrationCarryObjectCapturePoint::StopUpdatingUIVisibility() {
}

void AInfiltrationCarryObjectCapturePoint::StartUpdatingUIVisibility() {
}


void AInfiltrationCarryObjectCapturePoint::OnRep_bCapturePointEnabled() {
}

void AInfiltrationCarryObjectCapturePoint::OnPawnEndOverlap(AFortPlayerPawn* TouchingPawn) {
}

void AInfiltrationCarryObjectCapturePoint::OnPawnBeginOverlap(AFortPlayerPawn* TouchingPawn) {
}



void AInfiltrationCarryObjectCapturePoint::MulticastIntelCaptured_Implementation() {
}

void AInfiltrationCarryObjectCapturePoint::IntelTagCallback(const FGameplayTag Tag, int32 NewCount) {
}

void AInfiltrationCarryObjectCapturePoint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInfiltrationCarryObjectCapturePoint, bCapturePointEnabled);
}

AInfiltrationCarryObjectCapturePoint::AInfiltrationCarryObjectCapturePoint() {
    this->UIShowDistance = 1;
    this->UIDetailDistance = 1;
    this->bCapturePointEnabled = false;
}

