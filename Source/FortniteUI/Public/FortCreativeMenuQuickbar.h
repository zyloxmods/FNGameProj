#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "EFortQuickBars.h"
#include "EFortContentBrowserQuickbarState.h"
#include "EFortCreativeItemType.h"
#include "OnEquipSelectionDelegateDelegate.h"
#include "OnFocusChangedDelegateDelegate.h"
#include "FortCreativeMenuQuickbar.generated.h"

class UAthenaQuickbarEditorBase;
class UFortItemDefinition;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UFortCreativeMenuQuickbar : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusChangedDelegate OnFocusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEquipSelectionDelegate OnEquipItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* CurrentItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativeItemType CurrentType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_QuickBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaQuickbarEditorBase* AthenaQuickbar_Creative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaQuickbarEditorBase* AthenaQuickbar_Trap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaQuickbarEditorBase* AthenaQuickbar_Primary;
    
public:
    UFortCreativeMenuQuickbar();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ShowQuickbar(EFortContentBrowserQuickbarState InQuickbarState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuickbarHighlight();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleAddItemToQuickbarAction(EFortQuickBars QuickBarType, const int32 SlotNum, const UFortItemDefinition* ItemDefinition);
    
};

