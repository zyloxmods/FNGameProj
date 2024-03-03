#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorAndTimePair.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorAndTimePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SpawnTime;
    
    FORTNITEGAME_API FActorAndTimePair();
};

