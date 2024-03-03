#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EFortQuickBars.h"
#include "Components/SlateWrapperTypes.h"
#include "EFortItemCardSize.h"
#include "FortQuickBarSlotBase.generated.h"

class UAthenaQuickBarNativeCell;
class UCommonTextBlock;
class UCommonWidgetSwitcher;
class UFortInputData;
class UFortItem;
class UFortItemCooldownWidget;
class UFortKeybindWidget;
class UFortMultiSizeItemCard;
class UImage;
class UTutorialHighlight;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuickBarSlotBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* SwitcherTopComboSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* SwitcherBottomComboSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindBottomCombo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindBottomCombo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindTopComboArrow1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindTopComboArrow2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindBottomComboArrow1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortKeybindWidget* KeybindBottomComboArrow2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* BottomHoldText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TopLeftArrowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TopLeftArrowImage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TopRightArrowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TopRightArrowImage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BottomLeftArrowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BottomLeftArrowImage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BottomRightArrowImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BottomRightArrowImage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* EmptyImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemCardMaximized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMultiSizeItemCard* ItemCardMinimized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemCooldownWidget* QuickbarSlotCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* SlotInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaQuickBarNativeCell* NativeCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortQuickBars QuickBarType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowBottomArrows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowTopArrows: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideKeybindsWhenAbilityUnavailable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldCollapseItemWidgetBorder: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DoNotPlaySelectionAnimation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAthenaQuickBar: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bKeybindsHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemCardSize ItemCardSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInputData* InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckVisibilityBasedOffInventoryCapacity;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTutorialHighlight> TutorialHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDragAndDropEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSlotSizeBySlotUsage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> SlotSizeBySlotUsage;
    
public:
    UFortQuickBarSlotBase();
    UFUNCTION(BlueprintCallable)
    void UpdateKeyBindingVisibility();
    
    UFUNCTION(BlueprintCallable)
    void UpdateKeyBindingText();
    
    UFUNCTION(BlueprintCallable)
    void UpdateItemCardsVisibility();
    
    UFUNCTION(BlueprintCallable)
    void SetTopComboSwitcherVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSlotSelected(bool bSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetQuickbarTypeRuntime(EFortQuickBars NewQuickBarType, bool bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetQuickbarIndexRuntime(int32 Index, bool bRefresh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBottomComboSwitcherVisibility_BP(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetBottomComboSwitcherVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void Resize(EFortItemCardSize CardSize);
    
    UFUNCTION(BlueprintCallable)
    void RefreshItemIfSlotChanged(EFortQuickBars InQuickBar, const TArray<int32>& InSlot);
    
    UFUNCTION(BlueprintCallable)
    void RefreshItem();
    
    UFUNCTION(BlueprintCallable)
    void RefreshInventoryCapacity();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMinigameStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMinigameEnded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MinimizeSlot(bool bShouldSkipAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MaximizeSlot(bool bShouldSkipAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetSlotSizeForItem(const UFortItem* InItem) const;
    
    UFUNCTION(BlueprintCallable)
    FName GetKeyBindingActionKeyboard();
    
    UFUNCTION(BlueprintCallable)
    FName GetKeyBindingActionGamepad();
    
    UFUNCTION(BlueprintCallable)
    FName GetKeyBindingAction();
    
};

