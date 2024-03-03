#include "NitrogenFareValueIndicator.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

void ANitrogenFareValueIndicator::OnRep_IndicatorValue() {
}


void ANitrogenFareValueIndicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANitrogenFareValueIndicator, IndicatorValue);
}

ANitrogenFareValueIndicator::ANitrogenFareValueIndicator() {
    this->InstancedMeshComp = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedMeshComp"));
    this->IndicatorValue = 0;
    this->bShouldActorRotateOnTickToFacePlayerCamera = true;
    this->LocalPlayerCameraManager = NULL;
}

