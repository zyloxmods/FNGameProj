#pragma once
#include "CoreMinimal.h"
#include "EFortFeedbackBroadcastFilter.h"
#include "FortFeedbackHandle.generated.h"

class UFortFeedbackBank;

USTRUCT(BlueprintType)
struct FFortFeedbackHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortFeedbackBank* FeedbackBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBankDefined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortFeedbackBroadcastFilter> BroadcastFilterOverride;
    
    FORTNITEGAME_API FFortFeedbackHandle();
};

