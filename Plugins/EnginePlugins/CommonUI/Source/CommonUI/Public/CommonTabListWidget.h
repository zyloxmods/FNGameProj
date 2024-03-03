#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Components/SlateWrapperTypes.h"
#include "CommonRegisteredTabInfo.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CommonTabListWidget.generated.h"

class UCommonAnimatedSwitcher;
class UCommonButton;
class UCommonButtonGroup;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUI_API UCommonTabListWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTabSelected, FName, TabId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonRemoved, FName, TabId, UCommonButton*, TabButton);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTabButtonCreated, FName, TabId, UCommonButton*, TabButton);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabSelected OnTabSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonCreated OnTabButtonCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTabButtonRemoved OnTabButtonRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextTabInputActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousTabInputActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoListenForInput;
    
private:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCommonAnimatedSwitcher> LinkedSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FCommonRegisteredTabInfo> RegisteredTabsByID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
public:
    UCommonTabListWidget();
    UFUNCTION(BlueprintCallable)
    void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetTabInteractionEnabled(FName TabNameID, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetTabEnabled(FName TabNameID, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetListeningForInput(bool bShouldListen);
    
    UFUNCTION(BlueprintCallable)
    void SetLinkedSwitcher(UCommonAnimatedSwitcher* CommonSwitcher);
    
    UFUNCTION(BlueprintCallable)
    bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveTab(FName TabNameID);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllTabs();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterTab(FName TabNameID, TSubclassOf<UCommonButton> ButtonWidgetType, UWidget* ContentWidget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabRemoved(FName TabNameID, UCommonButton* TabButton);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleTabCreated(FName TabNameID, UCommonButton* TabButton);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTabButtonSelected(UCommonButton* SelectedTabButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviousTabInputAction(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreLinkedSwitcherChanged_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePostLinkedSwitcherChanged_BP();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleNextTabInputAction(bool& bPassThrough);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTabIdAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTabCount() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    UCommonButton* GetTabButtonByID(FName TabNameID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedTabId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonAnimatedSwitcher* GetLinkedSwitcher() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetActiveTab() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableTabWithReason(FName TabNameID, const FText& Reason);
    
};

