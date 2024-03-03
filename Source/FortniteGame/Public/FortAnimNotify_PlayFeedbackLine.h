#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FortFeedbackHandle.h"
#include "FortAnimNotify_PlayFeedbackLine.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UFortAnimNotify_PlayFeedbackLine : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortFeedbackHandle Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReplication;
    
    UFortAnimNotify_PlayFeedbackLine();
};

