#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserListEntry.h"
#include "Templates/SubclassOf.h"
#include "FortPurchaseHistoryEntry.generated.h"

class UCommonTextBlock;
class UFortCosmeticItemCard;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class UFortPurchaseHistoryEntry : public UCommonButton, public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCosmeticItemCard> ItemCardClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CardWidthOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LootEntryItemTypesToExclude;
    
public:
    UFortPurchaseHistoryEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemList(const TArray<UFortCosmeticItemCard*>& ItemCards);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupItemCard(const UFortCosmeticItemCard* ItemCard, const UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPurchaseText(const FText& PurchaseText, bool bHasBeenRefunded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetHistory(bool bHasBeenRefunded, bool bIsTokenlessRefund, bool bPlayerHasTokens);
    
    
    // Fix for true pure virtual functions not being implemented
};

