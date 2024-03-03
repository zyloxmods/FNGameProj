#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "FortAbilitySystemComponentAbilityGivenListenerInterface.h"
#include "FortDamageSourceInterface.h"
#include "FortItem.h"
#include "FortItemEntry.h"
#include "FortWorldItem.generated.h"

class AFortInventory;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortWorldItem : public UFortItem, public IFortDamageSourceInterface, public IGameplayTagAssetInterface, public IFortAbilitySystemComponentAbilityGivenListenerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTemporaryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsPersistentUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingPersistentDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortInventory* OwnerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortItemEntry ItemEntry;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseRegenCooldown;
    
public:
    UFortWorldItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SeenInFrontend() const;
    
    UFUNCTION(BlueprintCallable)
    void MarkItemAsSeenInFrontend();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFuelChargeValue() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
};

