#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FortAnimNotifyState_RestartTraversalEmote.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FORTNITEGAME_API UFortAnimNotifyState_RestartTraversalEmote : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InMotionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutSpeed;
    
    UFortAnimNotifyState_RestartTraversalEmote();
};

