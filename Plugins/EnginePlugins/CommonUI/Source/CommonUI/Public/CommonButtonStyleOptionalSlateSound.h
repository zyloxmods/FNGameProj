#pragma once
#include "CoreMinimal.h"
#include "Sound/SlateSound.h"
#include "CommonButtonStyleOptionalSlateSound.generated.h"

USTRUCT(BlueprintType)
struct FCommonButtonStyleOptionalSlateSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateSound Sound;
    
    COMMONUI_API FCommonButtonStyleOptionalSlateSound();
};

