#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortUIMessagesPageBase.generated.h"

class UCommonListView;
class UFortUINotification;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortUIMessagesPageBase : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumMessagesShown;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* MessagesList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortUINotification*> MessagesShown;
    
public:
    UFortUIMessagesPageBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnNotificationCleared(UFortUINotification* ClearedMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageAvailable();
    
public:
    UFUNCTION(BlueprintCallable)
    void FillMessagesList();
    
};

