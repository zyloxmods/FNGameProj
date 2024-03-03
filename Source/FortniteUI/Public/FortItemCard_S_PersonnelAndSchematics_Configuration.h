#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "FortItemCard_DefenderWeaponTypeIcon_Configuration.h"
#include "FortItemCard_DetailAreaBorder_Configuration.h"
#include "FortItemCard_LevelMeter_Configuration.h"
#include "FortItemCard_NameplateBorder_Configuration.h"
#include "FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration.h"
#include "FortItemCard_TierMeter_Configuration.h"
#include "FortItemCard_S_PersonnelAndSchematics_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_S_PersonnelAndSchematics_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin BackgroundPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BookmarkImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_NameplateBorder_Configuration Nameplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ClassIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LeadSurvivorTypeIconSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FirstIconSlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PaddingBetweenIconSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SecondIconSlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_LevelMeter_Configuration LevelMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TierMeterLeftPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_TierMeter_Configuration TierMeter;
    
    FORTNITEUI_API FFortItemCard_S_PersonnelAndSchematics_Configuration();
};

