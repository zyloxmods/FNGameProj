#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "CommonActionCompleteSingleDelegate.h"
#include "CommonActionProgressSingleDelegate.h"
#include "CommonInputActionHandlerData.h"
#include "Operation.h"
#include "CommonInputManager.generated.h"

class ICommonActionHandlerInterface;
class UCommonActionHandlerInterface;
class UCommonActivatablePanel;
class UCommonGlobalInputHandler;

UCLASS(Blueprintable)
class COMMONUI_API UCommonInputManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ICommonActionHandlerInterface> CurrentlyHeldActionInputHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonActivatablePanel*> ActivatablePanelStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonGlobalInputHandler* GlobalInputHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOperation> Operations;
    
public:
    UCommonInputManager();
    UFUNCTION(BlueprintCallable)
    void SuspendStartingOperationProcessing();
    
    UFUNCTION(BlueprintCallable)
    bool StopListeningForExistingHeldAction(const FDataTableRowHandle& InputActionDataRow, const FCommonActionCompleteSingle& CompleteEvent, const FCommonActionProgressSingle& ProgressEvent);
    
    UFUNCTION(BlueprintCallable)
    bool StartListeningForExistingHeldAction(const FDataTableRowHandle& InputActionDataRow, const FCommonActionCompleteSingle& CompleteEvent, const FCommonActionProgressSingle& ProgressEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority);
    
    UFUNCTION(BlueprintCallable)
    void ResumeStartingOperationProcessing();
    
    UFUNCTION(BlueprintCallable)
    void PushActivatablePanel(UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
    
    UFUNCTION(BlueprintCallable)
    void PopActivatablePanel(UCommonActivatablePanel* ActivatablePanel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPanelOnStack(const UCommonActivatablePanel* InPanel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputSuspended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommonActivatablePanel* GetTopPanel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGlobalInputHandlerPriorityFilter() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions);
    
};

