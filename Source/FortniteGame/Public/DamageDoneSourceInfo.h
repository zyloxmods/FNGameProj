#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DamageDoneSourceInfo.generated.h"

USTRUCT(BlueprintType)
struct FDamageDoneSourceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TrackedSourceTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    FORTNITEGAME_API FDamageDoneSourceInfo();
};

