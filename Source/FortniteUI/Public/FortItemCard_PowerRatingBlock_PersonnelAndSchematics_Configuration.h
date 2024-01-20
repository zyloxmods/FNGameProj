#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "FortItemCard_PowerRatingBlock_Configuration.h"
#include "FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration.generated.h"

class UCommonTextStyle;

USTRUCT(BlueprintType)
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : public FFortItemCard_PowerRatingBlock_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PersonnelPowerRatingIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonTextStyle> PersonnelPowerRatingTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SchematicPowerRatingIconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonTextStyle> SchematicPowerRatingTextStyle;
    
    FORTNITEUI_API FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration();
};

