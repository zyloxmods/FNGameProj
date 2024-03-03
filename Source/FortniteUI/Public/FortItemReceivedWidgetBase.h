#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanelWithItemPreview.h"
#include "FortReceivedItemLootInfo.h"
#include "Templates/SubclassOf.h"
#include "FortItemReceivedWidgetBase.generated.h"

class UFortGiftBoxItem;
class UFortItem;
class UHorizontalBox;
class UItemCardWidgetBase;
class UScrollBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemReceivedWidgetBase : public UFortActivatablePanelWithItemPreview {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortReceivedItemLootInfo> ItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* GiftBoxItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FromUsername;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* HeaderContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* GiftScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemCardWidgetBase> ItemCardClass;
    
public:
    UFortItemReceivedWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowGiftBox();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGiftBoxItem(UFortGiftBoxItem* NewGiftBoxItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAlignmentOnSlots(UScrollBox* Widget);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignmentOnSlot(UScrollBox* Widget, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnGiftBoxItemSetInternal(bool bFromSelf);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGiftBoxItemSet(bool bFromSelf);
    
    UFUNCTION(BlueprintCallable)
    UFortItem* GetTemporaryInstance(const FFortReceivedItemLootInfo& ItemReference);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClosingGiftbox();
    
};

