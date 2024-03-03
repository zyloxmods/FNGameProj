#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortItemCraftingOptionsActivatablePanel.generated.h"

class UFortItemManagementScreen;
class UFortSchematicItem;
class UImage;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemCraftingOptionsActivatablePanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSchematicItem* BaseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSchematicItem* TargetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCraftingTierIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCraftingTierIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetPromotionTierIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanCraftTargetItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TierImageParent_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TierImageParent_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TierImageParent_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TierImageParent_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* TierImageParent_5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImage_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImage_2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImage_3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImage_4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TierImage_5;
    
public:
    UFortItemCraftingOptionsActivatablePanel();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTierImages();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCraftingTierIndex(int32 NewTierIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedQuantity_BP(int32 NewQuantity);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetItemManagementScreen(UFortItemManagementScreen* InItemManagementScreen);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseSchematicItem(UFortSchematicItem* InBaseItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SelectPreviousTier();
    
    UFUNCTION(BlueprintCallable)
    void SelectNextTier();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetItemChanged(UFortSchematicItem* NewTargetItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectedQuantityChanged(int32 NewSelectedQuantity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMaxQuantityChanged(int32 NewMaxQuantity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBaseItemChanged(UFortSchematicItem* NewBaseItem);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseSelectedQuantity();
    
    UFUNCTION(BlueprintCallable)
    void DecreaseSelectedQuantity();
    
    UFUNCTION(BlueprintCallable)
    void CraftTargetItem();
    
    UFUNCTION(BlueprintCallable)
    void CraftAndSlotTargetItem();
    
};

