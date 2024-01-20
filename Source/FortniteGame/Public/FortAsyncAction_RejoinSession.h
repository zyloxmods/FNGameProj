#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortRejoinSessionCompleteDelegateDelegate.h"
#include "FortAsyncAction_RejoinSession.generated.h"

class AFortPlayerController;
class UFortAsyncAction_RejoinSession;

UCLASS(Blueprintable)
class UFortAsyncAction_RejoinSession : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRejoinSessionCompleteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRejoinSessionCompleteDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
public:
    UFortAsyncAction_RejoinSession();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_RejoinSession* RejoinSession(AFortPlayerController* NewPlayerController);
    
};

