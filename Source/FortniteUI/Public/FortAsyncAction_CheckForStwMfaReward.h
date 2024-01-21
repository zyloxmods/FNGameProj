#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortCheckForStwMfaRewardCompleteDelegateDelegate.h"
#include "FortAsyncAction_CheckForStwMfaReward.generated.h"

class AFortPlayerController;
class UFortAsyncAction_CheckForStwMfaReward;

UCLASS(Blueprintable)
class UFortAsyncAction_CheckForStwMfaReward : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCheckForStwMfaRewardCompleteDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCheckForStwMfaRewardCompleteDelegate OnFailed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
public:
    UFortAsyncAction_CheckForStwMfaReward();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_CheckForStwMfaReward* CheckForStwMfaReward(AFortPlayerController* NewPlayerController);
    
};

