#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "EFortItemType.h"
#include "EFortRarity.h"
#include "FortAnalyticsItemExclusions.generated.h"

UCLASS(Blueprintable)
class UFortAnalyticsItemExclusions : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EFortRarity> ExcludedRarities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EFortItemType> ExcludedItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedItemTags;
    
public:
    UFortAnalyticsItemExclusions();
};

