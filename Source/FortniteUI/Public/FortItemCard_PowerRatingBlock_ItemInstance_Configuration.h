#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortItemCard_PowerRatingBlock_Configuration.h"
#include "FortItemCard_PowerRatingBlock_ItemInstance_Configuration.generated.h"

class UCommonTextStyle;

USTRUCT(BlueprintType)
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : public FFortItemCard_PowerRatingBlock_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PowerRatingIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonTextStyle> PowerRatingTextStyle;
    
    FORTNITEUI_API FFortItemCard_PowerRatingBlock_ItemInstance_Configuration();
};

