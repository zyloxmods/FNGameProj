#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "OnRequestSquadSlotActionDelegate.h"
#include "FortSquadSlotSelectorButton.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortSquadSlotWidget;
class UMenuAnchor;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadSlotSelectorButton : public UCommonButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestSquadSlotAction OnRequestOpenSquadSlotEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestSquadSlotAction OnRequestViewInAllEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotWidget* SquadSlotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* PopupMenuAnchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
public:
    UFortSquadSlotSelectorButton();
    UFUNCTION(BlueprintCallable)
    void ViewInAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SquadSlotWidgetUpdated();
    
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void OpenSquadSlot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadSlotLockedBP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreDifferentSquadSlotSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePostDifferentSquadSlotSetBP();
    
private:
    UFUNCTION(BlueprintCallable)
    UWidget* GetPopupMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInPreviewMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const;
    
};

