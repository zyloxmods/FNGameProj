#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTooltipDisplayInfo.generated.h"

class UFortTooltipDisplayStatsList;

USTRUCT(BlueprintType)
struct FFortTooltipDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* PrimaryObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* SecondaryObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DescriptionStatsTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltipDisplayStatsList* TooltipStatsList;
    
    FORTNITEGAME_API FFortTooltipDisplayInfo();
};

