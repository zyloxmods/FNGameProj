#include "FortMissionLarsVan.h"
#include "Components/ArrowComponent.h"
#include "Components/InterpToMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

void AFortMissionLarsVan::SetPlayerWaitingToJump(AFortPlayerPawn* Waiting) {
}

AFortMissionLarsVan::AFortMissionLarsVan() {
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    Van = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van"));
    VanApparatus = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Apparatus"));
    VanBalloon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Balloon"));
    VanFlames = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Flames"));
    Stool = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stool"));
    Lars = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Lars"));
    Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Jump Transform"));
    VanMovement = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("Movment"));
}

