#include "FortFlag.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

AFortFlag::AFortFlag() {
    this->FlagMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlagMeshComp0"));
    this->CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule0"));
}

