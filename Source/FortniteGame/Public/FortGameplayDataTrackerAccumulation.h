#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayDataTrackedRange.h"
#include "FortGameplayDataTrackerAccumulationContributor.h"
#include "FortGameplayDataTrackerAccumulation.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayDataTrackerAccumulation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AccumulationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackerAccumulationContributor> Contributions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGameplayDataTrackedRange> TrackedRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
public:
    FORTNITEGAME_API FFortGameplayDataTrackerAccumulation();
};

