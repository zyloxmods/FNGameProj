#pragma once
#include "CoreMinimal.h"
#include "FortItemReceivedWidgetBase.h"
#include "FortItemReceivedPrePrompt.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemReceivedPrePrompt : public UFortItemReceivedWidgetBase {
    GENERATED_BODY()
public:
   // UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
  //  FOnPrePromptClosed OnPrePromptClosed;
    
    UFortItemReceivedPrePrompt();
};

