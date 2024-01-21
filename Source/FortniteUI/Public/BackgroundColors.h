#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BackgroundColors.generated.h"

USTRUCT(BlueprintType)
struct FBackgroundColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor GridColor;
    
    FORTNITEUI_API FBackgroundColors();
};

