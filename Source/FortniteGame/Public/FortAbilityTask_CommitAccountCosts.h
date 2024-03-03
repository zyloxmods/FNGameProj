#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "CommitAccountCostsDelegateDelegate.h"
#include "FortAbilityTask_CommitAccountCosts.generated.h"

class UFortAbilityTask_CommitAccountCosts;
class UGameplayAbility;

UCLASS(Blueprintable)
class UFortAbilityTask_CommitAccountCosts : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommitAccountCostsDelegate OnCommitted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommitAccountCostsDelegate OnFailed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasCancellable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequestPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCommittedLocally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString AbilityName;
    
public:
    UFortAbilityTask_CommitAccountCosts();
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_CommitAccountCosts* CommitAccountCosts(UGameplayAbility* OwningAbility);
    
};

