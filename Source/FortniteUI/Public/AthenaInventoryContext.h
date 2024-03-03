#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "AthenaInventoryContext.generated.h"

class UFortItem;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UAthenaInventoryContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAthenaInventorySwapStarted, int32, SlotIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAthenaInventorySwapComplete);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAthenaInventoryItemSelected, UFortItem*, Item);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaInventoryItemSelected OnInventoryItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaInventorySwapStarted OnInventorySwapStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAthenaInventorySwapComplete OnInventorySwapComplete;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortItem> LastSelectedInventoryItem;
    
public:
    UAthenaInventoryContext();
    UFUNCTION(BlueprintCallable)
    void StartOrFinishSwap(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedInventoryItem(UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetSelectedInventoryItem() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelSwap();
    
};

