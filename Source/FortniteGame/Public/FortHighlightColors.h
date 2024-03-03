#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortHighlightColors.generated.h"

USTRUCT(BlueprintType)
struct FFortHighlightColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutlineColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SceneModulationColor1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SceneModulationColor2;
    
    FORTNITEGAME_API FFortHighlightColors();
};

