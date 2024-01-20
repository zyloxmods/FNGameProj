#include "FortHexMapMarkerBase.h"
#include "Components/SkeletalMeshComponent.h"

AFortHexMapMarkerBase::AFortHexMapMarkerBase() {
    this->IdleAnimation = NULL;
    this->SkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMeshComponent0"));
}

