#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortPhysicsReplicatedTargetGhost.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, Config=Game)
class AFortPhysicsReplicatedTargetGhost : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    AFortPhysicsReplicatedTargetGhost();
};

