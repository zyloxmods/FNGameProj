#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommonActionCommitedDelegate.h"
#include "CommonActionHandlerInterface.h"
#include "CommonActionProgressSingleDelegate.h"
#include "CommonActivatableWidget.h"
#include "CommonInputActionHandlerData.h"
#include "EInputActionState.h"
#include "OnWidgetActivationChangedDynamicDelegate.h"
#include "CommonActivatablePanel.generated.h"

class UCommonPopupMenu;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class COMMONUI_API UCommonActivatablePanel : public UCommonActivatableWidget, public ICommonActionHandlerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetActivationChangedDynamic OnWidgetActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetActivationChangedDynamic OnWidgetDeactivated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeAllActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExposeActionsExternally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBypassStack;
    
public:
    UCommonActivatablePanel();
    UFUNCTION(BlueprintCallable)
    void SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent, UCommonPopupMenu* PopupMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, UCommonPopupMenu* PopupMenu);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionHandler(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHandlerStateWithDisabledCommitEvent(UDataTable* DataTable, FName RowName, EInputActionState State, FCommonActionCommited DisabledCommitEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FCommonActionCommited DisabledCommitEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State);
    
    UFUNCTION(BlueprintCallable)
    void SetActionHandlerState(const UDataTable* DataTable, FName RowName, EInputActionState State);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllInputActionHandlers();
    
    UFUNCTION(BlueprintCallable)
    void PopPanel();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionedBySwitcher();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemovedFromActivationStack();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputModeChanged(bool bUsingGamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginOutro();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginIntro();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddedToActivationStack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIntroed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInActivationStack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInputActionHandler(FDataTableRowHandle InputActionRow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndOutro();
    
    UFUNCTION(BlueprintCallable)
    void EndIntro();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginOutro();
    
    UFUNCTION(BlueprintCallable)
    void BeginIntro();
    
    UFUNCTION(BlueprintCallable)
    void AddInputActionNoHandler(UDataTable* DataTable, FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void AddInputActionHandlerWithProgressPopup(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent, UCommonPopupMenu* PopupMenu);
    
    UFUNCTION(BlueprintCallable)
    void AddInputActionHandlerWithProgress(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent);
    
    UFUNCTION(BlueprintCallable)
    void AddInputActionHandlerWithPopup(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, UCommonPopupMenu* PopupMenu);
    
    UFUNCTION(BlueprintCallable)
    void AddInputActionHandler(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent);
    
    
    // Fix for true pure virtual functions not being implemented
};

