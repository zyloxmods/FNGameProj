#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortItemInspectionMode.h"
#include "FortItemDetailElementWidget.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemDetailElementWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToDetail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToCompareWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPreviewUpgradingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpgradeLevelDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemInspectionMode CurrentInspectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpdatingSuspended;
    
public:
    UFortItemDetailElementWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleUpgradeLevelDeltaChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleShouldPreviewUpgradingItemChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuantityOverrideChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreDifferentItemToDetailSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePreDifferentItemToCompareWithSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePostDifferentItemToDetailSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePostDifferentItemToCompareWithSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemToDetailChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemToCompareWithChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleInspectModeChanged();
    
};

