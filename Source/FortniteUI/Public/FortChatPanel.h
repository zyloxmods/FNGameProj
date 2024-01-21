#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortChatPanel.generated.h"

class UFortChatContainer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortChatPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortChatContainer* ChatContainer;
    
public:
    UFortChatPanel();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetIsOnFocusedPathChanged(bool bOnFocusPath);
    
};

