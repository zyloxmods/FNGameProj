#pragma once
#include "CoreMinimal.h"
#include "ActorAndTimePair.h"
#include "AgingActorArray.generated.h"

USTRUCT(BlueprintType)
struct FAgingActorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorAndTimePair> AgingActors;
    
    FORTNITEGAME_API FAgingActorArray();
};

