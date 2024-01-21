#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "FortItemCard_DetailAreaBorder_Configuration.h"
#include "FortItemCard_XS_PersonnelAndSchematics_Configuration.generated.h"

USTRUCT(BlueprintType)
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin BackgroundPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BookmarkImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AvailableUpgradeIconSize;
    
    FORTNITEUI_API FFortItemCard_XS_PersonnelAndSchematics_Configuration();
};

