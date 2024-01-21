#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortAbandonSessionCompleteDelegateDelegate.h"
#include "FortAsyncAction_AbandonSession.generated.h"

class AFortPlayerController;
class UFortAsyncAction_AbandonSession;

UCLASS(Blueprintable)
class UFortAsyncAction_AbandonSession : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAbandonSessionCompleteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAbandonSessionCompleteDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
public:
    UFortAsyncAction_AbandonSession();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_AbandonSession* AbandonSession(AFortPlayerController* NewPlayerController);
    
};

