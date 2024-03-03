#include "FortMissionLarsVan.h"
#include "Components/ArrowComponent.h"
#include "Components/InterpToMovementComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

void AFortMissionLarsVan::SetPlayerWaitingToJump(AFortPlayerPawn* Waiting) {
}

AFortMissionLarsVan::AFortMissionLarsVan() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root Component"));
    this->Van = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van"));
    this->VanApparatus = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Apparatus"));
    this->VanBalloon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Balloon"));
    this->VanFlames = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Van Flames"));
    this->Stool = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Stool"));
    this->Lars = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Lars"));
    this->Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Jump Transform"));
    this->VanMovement = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("Movment"));
}

