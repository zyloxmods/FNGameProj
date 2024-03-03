#pragma once
#include "CoreMinimal.h"
#include "FortFeedbackAction.h"
#include "FortFeedbackActionBankDefined.generated.h"

USTRUCT(BlueprintType)
struct FFortFeedbackActionBankDefined : public FFortFeedbackAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinReplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinReplayTimeForSpeaker;
    
public:
    FORTNITEGAME_API FFortFeedbackActionBankDefined();
};

