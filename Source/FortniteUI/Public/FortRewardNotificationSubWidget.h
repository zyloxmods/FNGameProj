#pragma once
#include "CoreMinimal.h"
#include "CommonActionCommitedDelegate.h"
#include "CommonUserWidget.h"
#include "EInputActionState.h"
#include "Engine/DataTable.h"
#include "OnRewardWidgetTransitionDelegateDelegate.h"
#include "FortRewardNotificationSubWidget.generated.h"

class UDataTable;
class UFortItem;
class UFortRewardNotificationWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortRewardNotificationSubWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewardWidgetTransitionDelegate OnTransitionInComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewardWidgetTransitionDelegate OnTransitionOutComplete;
    
    UFortRewardNotificationSubWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionOutBegin();
    
public:
    UFUNCTION(BlueprintCallable)
    void TransitionOut();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionInBegin();
    
public:
    UFUNCTION(BlueprintCallable)
    void TransitionIn();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionText(FText Text);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionHidden();
    
    UFUNCTION(BlueprintCallable)
    void SetPrimaryActionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionHandlerState(UDataTable* DataTable, FName RowName, EInputActionState State);
    
    UFUNCTION(BlueprintCallable)
    void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllInputActionHandlers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrimaryAction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationUp();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationRight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationLeft();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNavigationDown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPrimaryActionHidden(bool& bHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void IsPrimaryActionEnabled(bool& bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void InspectItem(UFortItem* ItemToInspect, int32 QuantityOverride);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(UFortRewardNotificationWidget* MainWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddInputActionHandler(UDataTable* DataTable, FName RowName, FCommonActionCommited CommittedEvent);
    
};

