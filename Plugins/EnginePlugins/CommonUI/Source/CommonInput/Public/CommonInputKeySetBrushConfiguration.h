#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "CommonInputKeySetBrushConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMONINPUT_API FCommonInputKeySetBrushConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush KeyBrush;
    
    FCommonInputKeySetBrushConfiguration();
};

