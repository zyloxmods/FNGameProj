#pragma once
#include "CoreMinimal.h"
#include "FortHighlightColors.h"
#include "FortHighlightColorsContainer.generated.h"

USTRUCT(BlueprintType)
struct FFortHighlightColorsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortHighlightColors ValidHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortHighlightColors InvalidHighlight;
    
    FORTNITEGAME_API FFortHighlightColorsContainer();
};

