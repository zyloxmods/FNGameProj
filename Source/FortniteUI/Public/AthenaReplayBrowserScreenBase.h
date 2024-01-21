#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "AthenaReplayBrowserScreenBase.generated.h"

class UAthenaReplayBrowserRowProxyInstance;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReplayBrowserScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAthenaReplayBrowserRowProxyInstance*> RowProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PlayActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DeleteActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RenameActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle RefreshActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackActionRowHandle;
    
public:
    UAthenaReplayBrowserScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDeleteInvalidDialog(const FText& Title, const FText& MESSAGE);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveAndRenameReplay(const UAthenaReplayBrowserRowProxyInstance* RowProxy, const FString& NewReplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RenameReplay(const UAthenaReplayBrowserRowProxyInstance* RowProxy, const FString& NewReplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayReplay(const UAthenaReplayBrowserRowProxyInstance* RowProxy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSaveFailed(const FText& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRowsUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRenameFailed(const FText& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRenameActionExecuted(bool& bPassThrough);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRefreshActionExecuted(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayFailed(const FText& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeleteFailed(const FText& Reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeleteActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackActionExecuted(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActionFinished();
    
    UFUNCTION(BlueprintCallable)
    bool IsStreamingReplayViewEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHandlingAction();
    
    UFUNCTION(BlueprintCallable)
    bool DoesReplayFolderExist();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeleteReplay(const UAthenaReplayBrowserRowProxyInstance* RowProxy);
    
    UFUNCTION(BlueprintCallable)
    void DeleteInvalidReplays();
    
    UFUNCTION(BlueprintCallable)
    void BrowseToReplayFolder();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreExternalActionsOutstanding();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAnyActionsOutstanding();
    
};

