#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "FortTheaterColorInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortTheaterColorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDifficultyToDetermineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor Color;
    
    FORTNITEGAME_API FFortTheaterColorInfo();
};

