#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortItemInspectionMode.h"
#include "FortItemDetailsHostPanel.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UCommonBorder;
class UCommonLoadGuard;
class UFortItem;
class UFortTooltipLoadingWrapper;
class UNamedSlot;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemDetailsHostPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToDetail;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> ItemToCompareWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPreviewUpgradingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* DetailsContainerSlotWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* HighRarityBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemInspectionMode CurrentInspectMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltipLoadingWrapper* ItemToDetailLoadingWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltipLoadingWrapper* ItemToCompareLoadingWrapper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* ItemToDetailLoadGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* ItemToCompareLoadGuard;
    
public:
    UFortItemDetailsHostPanel();
    UFUNCTION(BlueprintCallable)
    void ShouldPreviewUpgradingItem(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetQuantityOverride(const int32 NewQuantityOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetItemViewContext(const TScriptInterface<IFortItemViewContextInterface>& NewItemViewContext);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToDetail(const UFortItem* NewItemToDetail);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToCompareWith(const UFortItem* NewItemToCompareWith);
    
    UFUNCTION(BlueprintCallable)
    void SetInspectMode(EFortItemInspectionMode InspectMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleShouldPreviewUpgradingItemChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleQuantityOverrideChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemToDetailTooltipAssetsLoading();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemToDetailTooltipAssetsLoaded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemToCompareTooltipAssetsLoading();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemToCompareTooltipAssetsLoaded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleInspectModeChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemToDetailSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemToCompareSet();
    
};

