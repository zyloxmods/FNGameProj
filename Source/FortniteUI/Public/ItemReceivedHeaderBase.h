#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortReceivedItemLootInfo.h"
#include "ItemReceivedHeaderBase.generated.h"

class UFortGiftBoxItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UItemReceivedHeaderBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* GiftBoxItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FromUsername;
    
public:
    UItemReceivedHeaderBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBlueprintGiftBoxItem(UFortGiftBoxItem* GiftBox, const FString& FromUser, const TArray<FFortReceivedItemLootInfo>& ItemDefs, bool bSelfGift);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitFromGiftBoxItem_BP();
    
};

