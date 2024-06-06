#include "FortHexMapMarkerBase.h"
#include "Components/SkeletalMeshComponent.h"

AFortHexMapMarkerBase::AFortHexMapMarkerBase() {
    IdleAnimation = NULL;
    SkelMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMeshComponent0"));
}

