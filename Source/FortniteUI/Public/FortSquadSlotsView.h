#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ESquadSlotType.h"
#include "HomebaseSquad.h"
#include "HomebaseSquadSlot.h"
#include "OnRequestSquadSlotActionDelegate.h"
#include "SquadSlotSortTypes.h"
#include "Templates/SubclassOf.h"
#include "FortSquadSlotsView.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UCommonButton;
class UFortCommittableButtonGroup;
class UFortDisableAutoSlottingPromptAction;
class UFortSquadSlotSelectorButton;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadSlotsView : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDifferentSquadSlotSelected, int32, SquadSlotIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDifferentSquadSlotSelected OnDifferentSquadSlotSelectedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestSquadSlotAction OnRequestOpenSquadSlotEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestSquadSlotAction OnRequestViewInAllEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadOnlyModeWIFE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IndexOfSelectedSquadSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlotButtonsRequireSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInPreviewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESquadSlotType, FSquadSlotSortTypes> SquadSlotSortTypesMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDisableAutoSlottingPromptAction> DisableAutoSlottingToOpenSquadSlotPromptAction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCommittableButtonGroup* SquadSlotButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
public:
    UFortSquadSlotsView();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const;
    
    UFUNCTION(BlueprintCallable)
    bool TryGetSelectedSquadSlotSortTypes(FSquadSlotSortTypes& OutSlotSortTypes);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelectionLocked(const bool ShouldSelectionBeLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetInPreviewMode(const bool bPreview);
    
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadToManageBP(const FName SquadId);
    
    UFUNCTION(BlueprintCallable)
    void SelectSlot(int32 SquadSlotIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedButtonChanged(UCommonButton* SelectedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleRequestViewInAll(int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleRequestOpenSquadSlot(int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleHoveredButtonChanged(UCommonButton* HoveredButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonDoubleClicked(UCommonButton* CommittedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked(UCommonButton* CommittedButton, int32 ButtonIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIndexOfSelectedSquadSlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIdOfSquadToManageBP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(const int32 SquadSlotIndex, const FHomebaseSquadSlot& SquadSlotDefinition, UWidget*& OutSquadSlotButtonHost);
    
};

