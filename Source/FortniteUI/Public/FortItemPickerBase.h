#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemPickerBase.generated.h"

class IFortItemListViewInterface;
class UFortItemListViewInterface;
class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;
class UFortItemTileView;
class UListView;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemPickerBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSelectionEvent, UFortItem*, SelectedItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionEvent OnSelectionChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionEvent OnSelectionCommittedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionEvent OnItemClicked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionEvent OnItemClickedDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionEvent OnItemHoveredEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectionEvent OnItemUnhovered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemTileView* PickerTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ItemListViewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfirmSelectionIfAlreadySelectedAfterOneClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* NewlySelectedItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
public:
    UFortItemPickerBase();
    UFUNCTION(BlueprintCallable)
    bool TryCommitSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedItem(const UFortItem* ItemToSelect);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNullItemExplicitlySelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetSelectedItem() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TScriptInterface<IFortItemListViewInterface> GetListViewInterface();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexForItem(UFortItem* Item) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable)
    void CenterSelectedItemTileWidget();
    
    UFUNCTION(BlueprintCallable)
    bool CanItemBeComitted(const UFortItem* ItemToCommit);
    
};

