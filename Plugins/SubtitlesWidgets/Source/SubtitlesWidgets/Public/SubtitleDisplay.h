#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Fonts/SlateFontInfo.h"
#include "Components/Widget.h"
#include "SubtitleDisplay.generated.h"

UCLASS(Blueprintable)
class SUBTITLESWIDGETS_API USubtitleDisplay : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo FontInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WrapTextAt;
    
    USubtitleDisplay();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSubtitles() const;
    
};

