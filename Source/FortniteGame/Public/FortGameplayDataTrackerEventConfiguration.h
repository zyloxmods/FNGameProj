#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "EFortGameplayDataTrackerEventContributionType.h"
#include "FortGameplayDataTrackerEventConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayDataTrackerEventConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CoolDownRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGameplayDataTrackerEventContributionType ContributionType;
    
    FORTNITEGAME_API FFortGameplayDataTrackerEventConfiguration();
};

