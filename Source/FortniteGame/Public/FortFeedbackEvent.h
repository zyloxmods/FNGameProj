#pragma once
#include "CoreMinimal.h"
#include "FortFeedbackHandle.h"
#include "FortFeedbackEvent.generated.h"

class AFortPawn;

USTRUCT(BlueprintType)
struct FFortFeedbackEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* Recipient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFeedbackHandle Handle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverriddenQueuing;
    
    FORTNITEGAME_API FFortFeedbackEvent();
};

