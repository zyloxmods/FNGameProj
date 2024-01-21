#pragma once
#include "CoreMinimal.h"
#include "SocialChatMessageEntry.h"
#include "FortChatMessageEntry.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortChatMessageEntry : public USocialChatMessageEntry {
    GENERATED_BODY()
public:
    UFortChatMessageEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusedChanged(bool bIsFocused);
    
};

