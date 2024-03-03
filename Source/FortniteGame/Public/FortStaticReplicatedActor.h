#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortStaticReplicatedActor.generated.h"

UCLASS(Abstract, Blueprintable)
class AFortStaticReplicatedActor : public AActor {
    GENERATED_BODY()
public:
    AFortStaticReplicatedActor();
};

