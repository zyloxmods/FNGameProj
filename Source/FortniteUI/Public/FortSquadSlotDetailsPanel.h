#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortSquadSlottingRestrictionReason.h"
#include "FortSquadSlotDetailsPanel.generated.h"

class IFortItemViewContextInterface;
class UFortItemViewContextInterface;
class UFortItem;
class UFortSquadSlotItemDetailsHostPanel;
class ULocalPlayer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadSlotDetailsPanel : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotItemDetailsHostPanel* ItemDetailsPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortItemViewContextInterface> ItemViewContext;
    
public:
    UFortSquadSlotDetailsPanel();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetItemToPreviewInSlot(UFortItem*& OutItemToPreviewInSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void SetScrollWidget();
    
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadSlotLockedBP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadSlotStateChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSquadSlotRestrictionFactorsChangedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentSquadSlotSetBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemInSquadSlotBP(const ULocalPlayer* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const;
    
};

