#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayDataTrackerThreshold.h"
#include "FortTrackedGameplayDataRangeChangedInternalDelegate.h"
#include "FortGameplayDataTrackedRange.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayDataTrackedRange {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RangeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayDataTrackerThreshold LowerThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayDataTrackerThreshold UpperThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortTrackedGameplayDataRangeChangedInternal RangeChangedInternalDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCurrentlyInRange;
    
public:
    FORTNITEGAME_API FFortGameplayDataTrackedRange();
};

