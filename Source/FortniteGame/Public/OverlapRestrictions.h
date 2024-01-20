#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OverlapRestrictions.generated.h"

USTRUCT(BlueprintType)
struct FOverlapRestrictions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverlapsPerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverlapActorTagRestrictions;
    
    FORTNITEGAME_API FOverlapRestrictions();
};

