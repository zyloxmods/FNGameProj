#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortRarity.h"
#include "FortAlterationInfo.generated.h"

class UFortAlterationItemDefinition;
class UFortItem;

UCLASS(Blueprintable)
class UFortAlterationInfo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* CorrespondingItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAlterationItemDefinition* AlterationDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RequiredMinLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentItemLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFreeAlterationSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUnlockedByEvolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UpgradeLevelDelta;
    
public:
    UFortAlterationInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFreeAlterationChoice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlterationUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlterationHighlighted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPipCount(float MaxPips) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetCorrespondingItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAlterationItemDefinition* GetAlterationDefintion() const;
    
};

