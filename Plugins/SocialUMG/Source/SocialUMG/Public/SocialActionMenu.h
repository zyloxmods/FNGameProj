#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "SocialActionMenu.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialActionMenu : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    USocialActionMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpened();
    
    UFUNCTION(BlueprintCallable)
    void HandleMenuAnchorOpenChanged(bool bIsOpen);
    
};

