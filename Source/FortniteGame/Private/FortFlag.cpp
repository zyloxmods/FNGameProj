#include "FortFlag.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

AFortFlag::AFortFlag() {
    FlagMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FlagMeshComp0"));
    CollisionComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule0"));
}

