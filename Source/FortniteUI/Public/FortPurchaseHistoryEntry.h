#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserListEntry.h"
#include "EItemRefundability.h"
#include "FortPurchaseHistoryEntry.generated.h"

class UCommonTextBlock;
class UFortMultiSizeItemCard;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPurchaseHistoryEntry : public UCommonButton, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
public:
    UFortPurchaseHistoryEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemList(const TArray<UFortMultiSizeItemCard*>& ItemCards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRefundState(const FText& PurchaseText, EItemRefundability Refundability);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPurchaseText(const FText& PurchaseText, bool bHasBeenRefunded);
    
    
    // Fix for true pure virtual functions not being implemented
};

