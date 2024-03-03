#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPickupTagTestContainer.generated.h"

USTRUCT(BlueprintType)
struct FFortPickupTagTestContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FailReason;
    
    FORTNITEGAME_API FFortPickupTagTestContainer();
};

