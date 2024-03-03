#pragma once
#include "CoreMinimal.h"
#include "AthenaBatchedDamageGameplayCues_NonShared.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAthenaBatchedDamageGameplayCues_NonShared {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NonPlayerHitActor;
    
    FORTNITEGAME_API FAthenaBatchedDamageGameplayCues_NonShared();
};

