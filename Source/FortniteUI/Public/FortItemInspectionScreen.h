#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortItemInspectionMode.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "Templates/SubclassOf.h"
#include "FortItemInspectionScreen.generated.h"

class UDataTable;
class UFortAccountItem;
class UFortAlterationModOptinScreenBase;
class UFortAlterationModScreenBase;
class UFortItem;
class UFortItemInspectCycleWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemInspectionMode CurrentInspectMode;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> InspectedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UpgradeAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EvolveAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FavoriteAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RarityUpgradingAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPreviewing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSeenRefundHelpPrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemInspectCycleWidget* CycleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery InspectAnimationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAlterationModOptinScreenBase> AlterationModOptinScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAlterationModScreenBase> AlterationModScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> RefundDescriptionsDataTable;
    
public:
    UFortItemInspectionScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void SetItemToRepresent(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void SetInspectionMode(EFortItemInspectionMode NewInspectMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAttemptingConversion(bool bIsAttemptingConversion);
    
    UFUNCTION(BlueprintCallable)
    void OpenItemInspect(UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32 QuantityOverride);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemSlottedInCollectionBook(const UFortItem* Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemToInspectDestroyedBP();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemToInspectDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemToInspectChangedBP(bool bWasFavoritedChanged);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleIsPreviewingChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentItemToInspectSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentInspectionModeSetBP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItem* GetRefundResultItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRefundDescriptionText() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemQuantityOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItemInspectCycleWidget* GetCycleWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesItemHaveLegacyAlterations() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DoAlterationModification();
    
};

