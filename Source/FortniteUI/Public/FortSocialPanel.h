#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortSocialPanel.generated.h"

class UFortSocialPanelView_UserLists;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialPanelView_UserLists* PanelView_UserLists;
    
public:
    UFortSocialPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySlideOutMenuOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void HandlePopAnimationComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePanel();
    
};

