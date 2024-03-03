#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortAlterationWidgetState.h"
#include "FortAlterationsWidget.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UFortAlterationButtonWidget;
class UFortAlterationInfo;
class UFortItem;

UCLASS(Blueprintable, EditInlineNew)
class UFortAlterationsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAlterationWidgetState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* ItemToCompareWith;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseButtons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* EmptyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup;
    
public:
    UFortAlterationsWidget();
    UFUNCTION(BlueprintCallable)
    void SetupInteractionEvents(UFortAlterationButtonWidget* Buttion);
    
    UFUNCTION(BlueprintCallable)
    void SetUpgradeLevelDelta(int32 InUpgradeLevelDelta);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EFortAlterationWidgetState InState);
    
    UFUNCTION(BlueprintCallable)
    void SetItemToCompareWith(UFortItem* InItem);
    
    UFUNCTION(BlueprintCallable)
    void SetItem(UFortItem* InItem, bool bInPreviewNewAlterations, bool bIntroAlterations);
    
    UFUNCTION(BlueprintCallable)
    void ProcessAlterations();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpgradeLevelDeltaChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemToCompareWithChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemChanged(bool bIntroAlterations, bool bWasFavoritedChanged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGenerateAlteration(UFortAlterationInfo* AlterationInfo);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusFirstItem();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAlterationSlotIndexModifiedBP(int32 ModifiedIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleAlterationsSlotSelected(UCommonButton* InAlterationButton, int32 SelectedIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleAlterationsSlotHovered(UCommonButton* InAlterationButton, int32 SelectedIndex);
    
};

