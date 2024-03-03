#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCollectionBookClaimRewardCompleteDelegateDelegate.h"
#include "FortCollectionBookInventoryUpdatedDelegateDelegate.h"
#include "FortCollectionBookResearchItemOperationCompleteDelegateDelegate.h"
#include "FortCollectionBookRewards.h"
#include "FortCollectionBookSlottedItemOperationCompleteDelegateDelegate.h"
#include "FortCollectionBookUnslottedItemOperationCompleteDelegateDelegate.h"
#include "FortPendingSlottedItemOperation.h"
#include "FortCollectionBookManager.generated.h"

class UFortAccountItem;
class UFortCollectionBookManager;
class UFortCollectionBookPage;
class UFortItem;
class UFortItemDefinition;
class UFortMcpProfileCollectionBook;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCollectionBookManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPagesChanged, UFortCollectionBookManager*, CollectionBookManager);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPagesChanged OnPagesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCollectionBookSlottedItemOperationCompleteDelegate OnSlottedItemOperationComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCollectionBookSlottedItemOperationCompleteDelegate OnSlotItemComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCollectionBookInventoryUpdatedDelegate OnInventoryUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCollectionBookClaimRewardCompleteDelegate OnRewardClaimed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCollectionBookUnslottedItemOperationCompleteDelegate OnUnslotItemComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCollectionBookResearchItemOperationCompleteDelegate OnResearchItemComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortPendingSlottedItemOperation> PendingSlottedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortPendingSlottedItemOperation> PendingUpdatedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UFortMcpProfileCollectionBook*> ProfileTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UFortCollectionBookPage*> PageTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FString> TemporaryPageTemplateIds;
    
public:
    UFortCollectionBookManager();
    UFUNCTION(BlueprintCallable)
    bool UnSlotItem(const UFortAccountItem* Item);
    
    UFUNCTION(BlueprintCallable)
    bool SlotItem(const UFortAccountItem* Item, FName SlotId);
    
    UFUNCTION(BlueprintCallable)
    bool PurchaseItem(const UFortAccountItem* Item);
    
    UFUNCTION(BlueprintCallable)
    void PopulateCollectionBookRewards(TArray<FFortCollectionBookRewards>& OutAvailableRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemMissingFromCollectionBook(const UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemInSlot(FName SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBookXPPercentToNextLevel(int32 CurrentLevel, int32 NewXP) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBookTotalXPToNextLevel(int32 CurrentLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DoesItemSlotExistInCollectionBook(const UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    void ClaimReward(const FFortCollectionBookRewards& RewardToClaim, int32 RewardIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSlotItem(const UFortAccountItem* AccountItem, bool bOnlyAllowIfSlotEmpty, UPARAM(Ref) FName OutSlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculatePageXp(FName PageId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalculateBookXp() const;
    
};

