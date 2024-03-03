#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCollectionBookProgressWidget.generated.h"

class UCommonActivatablePanel;
class UCommonButton;
class UCommonNumericTextBlock;
class UCommonTextBlock;
class UFortAccountItem;
class UFortCollectionBookPage;
class UFortCollectionBookPageDetailsWidget;
class UFortCollectionBookProgressionRewardsModalWidget;
class UFortCollectionBookProgressionRewardsPreviewWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookProgressWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CachedXPLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CachedXPCompletionPct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCollectionBookProgressionRewardsModalWidget> RewardDetailsModalWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookProgressionRewardsPreviewWidget* ProgressionRewardsPreviewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* XPTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* LevelTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* DetailsButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookPageDetailsWidget* PageDetailsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCollectionBookProgressionRewardsModalWidget* DetailsModalWidget;
    
public:
    UFortCollectionBookProgressWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSlottedItemOperationComplete(const UFortAccountItem* ItemSlotted, FName SlotId);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookPageSelected(const UFortCollectionBookPage* SelectedPage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCollectionBookLevelChanged(int32 NewLevel);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleDetailsModalWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel);
    
};

