#pragma once
#include "CoreMinimal.h"
#include "FortActiveMontageDecisionWindow.generated.h"

class UAnimSequenceBase;
class UFortAnimNotifyState_AbilityDecisionWindow;

USTRUCT(BlueprintType)
struct FFortActiveMontageDecisionWindow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAnimNotifyState_AbilityDecisionWindow* DecisionWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DecisionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivedPrimaryInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReceivedSecondaryInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlreadyProcessedInput;
    
    FORTNITEGAME_API FFortActiveMontageDecisionWindow();
};

