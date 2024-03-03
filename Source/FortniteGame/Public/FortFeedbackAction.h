#pragma once
#include "CoreMinimal.h"
#include "FortFeedbackHandle.h"
#include "FortFeedbackLine.h"
#include "FortFeedbackAction.generated.h"

USTRUCT(BlueprintType)
struct FFortFeedbackAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFeedbackHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortFeedbackLine> Lines;
    
    FORTNITEGAME_API FFortFeedbackAction();
};

