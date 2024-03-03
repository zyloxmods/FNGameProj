#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "CommonInputKeyBrushConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMONINPUT_API FCommonInputKeyBrushConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush KeyBrush;
    
    FCommonInputKeyBrushConfiguration();
};

