#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortItemCardSize.h"
#include "FortCollectionBookSlotWidget.generated.h"

class UFortAccountItem;
class UFortItem;
class UFortMultiSizeItemCard;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookSlotWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFortCollectionBookSlottedItemUpdatedDelegate);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize ItemCardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRewardCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemCardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* UnslottedOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ReadyToSlotOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* UnslottedButReadyOverlayWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SlotRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemAvailableToSlotText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoItemsAvailableToSlotText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HigherQualityItemsAvailableToSlotAndUpgradeAvailableText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HigherQualityItemsAvailableToSlotAndEvolveAvailableText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HigherQualityItemsAvailableToSlotText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemInSlotFullyUpgradedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemInSlotCanBeUpgradedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ItemInSlotCanBeEvolvedText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItem* SlottedItemRepresentation;
    
public:
    UFortCollectionBookSlotWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnItemDestroyed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemCardUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemSlotted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasItemsToSlot() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleUnslotItemComplete(const UFortAccountItem* UnslottedItem, const UFortAccountItem* OldItem, FName SlotId);
    
    UFUNCTION(BlueprintCallable)
    void HandleSlottedItemOperationComplete(const UFortAccountItem* NewItem, FName TemplateId);
    
    UFUNCTION(BlueprintCallable)
    void HandleResearchItemComplete(const UFortAccountItem* ResearchedItem, const FString& SlotId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetSlottedItemRepresentation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSlotRowName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumItemsToSlot() const;
    
};

