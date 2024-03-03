#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortGameplayDataTrackerAccumulationContributor.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayDataTrackerAccumulationContributor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EventValueMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
public:
    FORTNITEGAME_API FFortGameplayDataTrackerAccumulationContributor();
};

