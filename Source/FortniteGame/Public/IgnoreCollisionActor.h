#pragma once
#include "CoreMinimal.h"
#include "IgnoreCollisionActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIgnoreCollisionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* IgnoreActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeIgnoreStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IgnoreDuration;
    
    FORTNITEGAME_API FIgnoreCollisionActor();
};

