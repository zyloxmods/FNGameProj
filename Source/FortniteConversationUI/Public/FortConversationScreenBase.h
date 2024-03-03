#pragma once
#include "CoreMinimal.h"
#include "ClientConversationMessagePayload.h"
#include "FortHUDElementWidget.h"
#include "FortConversationScreenBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortConversationScreenBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UFortConversationScreenBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayMessage(const FClientConversationMessagePayload& NewMessage);
    
};

