#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigestedTargetBasedAccuracy.h"
#include "DigestedTargetBasedAccuracyCategory.generated.h"

USTRUCT(BlueprintType)
struct FDigestedTargetBasedAccuracyCategory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDigestedTargetBasedAccuracy TargetBasedAccuracy;
    
public:
    FORTNITEGAME_API FDigestedTargetBasedAccuracyCategory();
};

