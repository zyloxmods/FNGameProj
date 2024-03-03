#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CloseInputAction;
    
public:
    UFortSocialPanel();
protected:
    UFUNCTION(BlueprintCallable)
    void OnClosePanelInternal(bool& PassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySlideOutMenuOpen() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSocialPanelClose();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClosePanel();
    
};

