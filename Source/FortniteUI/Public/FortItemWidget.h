#pragma once
#include "CoreMinimal.h"
#include "EFortBrushSize.h"
#include "EFortRarity.h"
#include "FortBaseButton.h"
#include "FortItemWidget.generated.h"

class UFortItem;
class UMaterialInstanceDynamic;
class UTexture;

UCLASS(Blueprintable, EditInlineNew)
class UFortItemWidget : public UFortBaseButton {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnGetItemToCompare, UFortItem*&, ItemToCompare);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetItemToCompare OnGetItemToCompareDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CooldownMaterialParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CooldownMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastCooldownTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastCooldownPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LastIsActivatable: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityOverride;
    
public:
    UFortItemWidget();
    UFUNCTION(BlueprintCallable)
    void SetOnGetItemToCompareDelegate(UFortItemWidget::FOnGetItemToCompare InDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetItem(const UFortItem* InItem, int32 NewQuantityOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetCooldownMaterial(UMaterialInstanceDynamic* NewCooldownMaterial);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
    
    UFUNCTION(BlueprintCallable)
    void OnFortItemDestroyed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSchematic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemValid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryOverflowItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEquipped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTertiaryCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSecondaryCategory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintCallable)
    UFortItem* GetItemToCompare();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetIconTexture(TEnumAsByte<EFortBrushSize::Type> InBrushSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDurability() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnItemSet(UFortItem* NewItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnItemChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnCooldownSecondsChanged(int32 NewCooldownSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnActivatableChanged(bool bNewActivatable);
    
};

