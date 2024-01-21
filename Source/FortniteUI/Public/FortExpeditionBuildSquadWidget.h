#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortExpeditionBuildSquadWidget.generated.h"

class UFortExpeditionItem;
class UFortItemViewContext_ExpeditionSquadSlotItemPicker;
class UFortItemViewContext_ExpeditionSquadSlotsView;
class UFortSquadSlotDetailsPanel;
class UFortSquadSlotItemPicker;
class UFortSquadSlotsView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortExpeditionItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentSquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotsView* ExpeditionSquadSlotsView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotDetailsPanel* ExpeditionSquadSlotDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSquadSlotItemPicker* ExpeditionSquadSlotPicker;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContext_ExpeditionSlotsView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContext_ExpeditionSlotItemPicker;
    
public:
    UFortExpeditionBuildSquadWidget();
    UFUNCTION(BlueprintCallable)
    bool StartExpedition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetData(UFortExpeditionItem* InItem);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentSquadId(FName SquadId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartExpeditionCompleted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestClosePicker();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRefreshBuildSquadWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadSlotLocked(int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsExpeditionValidToStart();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStartExpeditionCompleted(const UFortExpeditionItem* Expedition, bool bSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);
    
};

