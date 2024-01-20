#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortStaticReplicatedActor.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortStaticReplicatedActor : public AActor {
    GENERATED_BODY()
public:
    AFortStaticReplicatedActor();
};

