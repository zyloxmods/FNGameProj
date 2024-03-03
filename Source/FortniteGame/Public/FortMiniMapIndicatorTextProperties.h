#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Fonts/SlateFontInfo.h"
#include "FortMiniMapIndicatorTextProperties.generated.h"

USTRUCT(BlueprintType)
struct FFortMiniMapIndicatorTextProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSlateFontInfo DisplayTextFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FLinearColor DisplayTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector2D DisplayTextOffset;
    
    FORTNITEGAME_API FFortMiniMapIndicatorTextProperties();
};

