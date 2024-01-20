#pragma once
#include "CoreMinimal.h"
#include "ScreenLabelText.generated.h"

USTRUCT(BlueprintType)
struct FScreenLabelText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NormalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RichText;
    
    FORTNITEGAME_API FScreenLabelText();
};

