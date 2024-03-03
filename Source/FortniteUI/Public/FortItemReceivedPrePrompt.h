#pragma once
#include "CoreMinimal.h"
#include "FortHUDShutdownTimerInterface.h"
#include "FortItemReceivedWidgetBase.h"
#include "FortItemReceivedPrePrompt.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemReceivedPrePrompt : public UFortItemReceivedWidgetBase, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
  //  UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    FOnPrePromptClosed OnPrePromptClosed;
    
    UFortItemReceivedPrePrompt();
    
    // Fix for true pure virtual functions not being implemented
};

