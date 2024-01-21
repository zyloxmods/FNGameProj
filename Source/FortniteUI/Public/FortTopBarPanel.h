#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortTopBarPanel.generated.h"

class UCommonLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class UFortTopBarPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortTopBarPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOnlineFriendsCount(int32 NewOnlineFriendsCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActiveInvitesCount(int32 NewActiveInvitesCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddIconToScreen(UCommonLazyImage* Image);
    
};

