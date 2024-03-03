#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "FortEnsureClientQuestLoginDelegateDelegate.h"
#include "FortAsyncAction_EnsureClientQuestLogin.generated.h"

class UFortAsyncAction_EnsureClientQuestLogin;
class UFortQuestManager;

UCLASS(Blueprintable)
class UFortAsyncAction_EnsureClientQuestLogin : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEnsureClientQuestLoginDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEnsureClientQuestLoginDelegate OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestManager* QuestManager;
    
public:
    UFortAsyncAction_EnsureClientQuestLogin();
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_EnsureClientQuestLogin* SendEnsureClientQuestLogin(UFortQuestManager* NewQuestManager);
    
};

