#pragma once
#include "CoreMinimal.h"
#include "ESubtitleDisplayBackgroundOpacity.h"
#include "ESubtitleDisplayTextBorder.h"
#include "ESubtitleDisplayTextColor.h"
#include "ESubtitleDisplayTextSize.h"
#include "SubtitleFormat.generated.h"

USTRUCT(BlueprintType)
struct SUBTITLESWIDGETS_API FSubtitleFormat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextSize SubtitleTextSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextColor SubtitleTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextBorder SubtitleTextBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity;
    
    FSubtitleFormat();
};

