#include "FortPhysicsReplicatedTargetGhost.h"
#include "Components/SkeletalMeshComponent.h"

AFortPhysicsReplicatedTargetGhost::AFortPhysicsReplicatedTargetGhost() {
    SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
}

