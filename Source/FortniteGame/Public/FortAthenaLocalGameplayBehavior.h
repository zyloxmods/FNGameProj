#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAthenaLocalGameplayBehavior.generated.h"

class UFortAthenaBTTask_DynamicBlueprint;

UCLASS(Blueprintable)
class AFortAthenaLocalGameplayBehavior : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedToAwakeDuringExecution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaBTTask_DynamicBlueprint* CachedTask;
    
public:
    AFortAthenaLocalGameplayBehavior();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExecute(AActor* Activator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAbort();
    
    UFUNCTION(BlueprintCallable)
    void FinishExecute();
    
};

