#include "FortPhysicsReplicatedTargetGhost.h"
#include "Components/SkeletalMeshComponent.h"

AFortPhysicsReplicatedTargetGhost::AFortPhysicsReplicatedTargetGhost() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

