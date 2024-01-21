#include "FortAircraft.h"
#include "FortCameraMode_ThirdPerson.h"
#include "Net/UnrealNetwork.h"


void AFortAircraft::OnRep_JumpFlashCount() {
}

void AFortAircraft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAircraft, JumpFlashCount);
}

AFortAircraft::AFortAircraft() {
    this->JumpFlashCount = 0;
    this->CameraModeClass = UFortCameraMode_ThirdPerson::StaticClass();
}

