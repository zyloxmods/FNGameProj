#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "SubtitleDisplayOptions.generated.h"

UCLASS(Blueprintable)
class SUBTITLESWIDGETS_API USubtitleDisplayOptions : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayTextSizes[5];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisplayTextColors[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayBorderSize[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayBackgroundOpacity[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundBrush;
    
    USubtitleDisplayOptions();
};

