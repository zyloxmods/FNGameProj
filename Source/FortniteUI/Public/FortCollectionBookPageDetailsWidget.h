#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortCollectionBookState.h"
#include "FortCollectionBookPageDetailsWidget.generated.h"

class UCommonActivatablePanel;
class UCommonButton;
class UCommonTextBlock;
class UFortAccountItem;
class UFortCollectionBookPage;
class UFortCollectionBookPageCompletionRewardWidget;
class UFortCollectionBookRewardModalWidget;
class UFortMaterialProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PageCompletionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMaterialProgressBar* ProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookPageCompletionRewardWidget* PageRewardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* RewardDetailsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookPage* DetailsPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCollectionBookRewardModalWidget> RewardDetailsModalWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModalTitle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookRewardModalWidget* RewardDetailsModalWidget;
    
public:
    UFortCollectionBookPageDetailsWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnUnslotItemComplete(const UFortAccountItem* SlottedItem, const UFortAccountItem* OldItem, FName SlotId);
    
    UFUNCTION(BlueprintCallable)
    void OnSlotItemComplete(const UFortAccountItem* SlottedItem, FName SlotId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPageProgressionUpdated(int32 TotalFilledSlots, int32 TotalSlots, EFortCollectionBookState State);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDetailsPageChanged(const UFortCollectionBookPage* InNewDetailsPage);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRewardDetailsModalWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel);
    
};

