#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TargetBasedAccuracy.h"
#include "TargetBasedAccuracyCategory.generated.h"

USTRUCT(BlueprintType)
struct FTargetBasedAccuracyCategory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTargetBasedAccuracy TargetBasedAccuracy;
    
public:
    FORTNITEGAME_API FTargetBasedAccuracyCategory();
};

