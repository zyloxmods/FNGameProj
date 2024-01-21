#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemDetailsPanel.generated.h"

class UFortItem;
class UUserWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemDetailsPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToDetail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToCompareWith;
    
public:
    UFortItemDetailsPanel();
    UFUNCTION(BlueprintCallable)
    void SetItemToDetail(const UFortItem* NewItemToDetail);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToCompareWith(const UFortItem* NewItemToCompareWith);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemToDetailSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemToCompareSet();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CustomWidget);
    
};

