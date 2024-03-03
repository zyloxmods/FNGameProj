#pragma once
#include "CoreMinimal.h"
#include "RotorHit.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRotorHit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> HitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastHitTimer;
    
    HOAGIERUNTIME_API FRotorHit();
};

