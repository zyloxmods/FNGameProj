#pragma once
#include "CoreMinimal.h"
#include "EFortFeedbackContext.h"
#include "FortFeedbackHandle.h"
#include "FortFeedbackResponse.generated.h"

USTRUCT(BlueprintType)
struct FFortFeedbackResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFeedbackHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFeedbackContext> Context;
    
    FORTNITEGAME_API FFortFeedbackResponse();
};

