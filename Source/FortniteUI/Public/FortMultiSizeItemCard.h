#pragma once
#include "CoreMinimal.h"
#include "EFortItemType.h"
#include "EFortRarity.h"
#include "EFortItemCardSize.h"
#include "FortItemWidget_NUI.h"
#include "FortMultiSizeItemCard.generated.h"

UCLASS(Blueprintable)
class UFortMultiSizeItemCard : public UFortItemWidget_NUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize BPItemCardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldDisplayItemAsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity RarityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemType EmptyItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldSuppressItemTypeIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldSuppressTierMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCollapseBorderPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCollapseItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldAutoHideDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCollapseQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldShowDurabilityRepairMode;
    
    UFortMultiSizeItemCard();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldUseNewItemCards();
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSuppressItemTypeIcon(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldShowDurabilityRepairMode(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldDisplayItemAsReward(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldCollapseQuantity(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldCollapseItem(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldCollapseBorderPadding(const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRarityOverride(const EFortRarity NewRarityOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetQuantityOverride(const int32 NewQuantityOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetEmptyItemType(const EFortItemType NewEmptyItemType);
    
    UFUNCTION(BlueprintCallable)
    void SetCardSize(const EFortItemCardSize CardSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortItemCardSize GetCardSize() const;
    
};

