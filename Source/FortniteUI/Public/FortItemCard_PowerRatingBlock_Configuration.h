#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "FortItemCard_PowerRatingBlock_Configuration.generated.h"

class UCommonTextStyle;

USTRUCT(BlueprintType)
struct FFortItemCard_PowerRatingBlock_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin CustomRatingInternalPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D CustomRatingIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonTextStyle> CustomRatingTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ComparisonIndicatorSize;
    
    FORTNITEUI_API FFortItemCard_PowerRatingBlock_Configuration();
};

