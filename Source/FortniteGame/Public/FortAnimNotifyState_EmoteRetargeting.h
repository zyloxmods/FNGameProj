#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EmoteRetargetingNotifyParameters.h"
#include "FortAnimNotifyState_EmoteRetargeting.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAnimNotifyState_EmoteRetargeting : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEmoteRetargetingNotifyParameters> EmoteParameters;
    
    UFortAnimNotifyState_EmoteRetargeting();
};

