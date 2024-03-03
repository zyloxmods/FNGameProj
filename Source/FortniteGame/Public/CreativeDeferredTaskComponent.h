#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DeferredCreativeTask.h"
#include "CreativeDeferredTaskComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCreativeDeferredTaskComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeferredCreativeTask> DeferredFunctionsToExecute;
    
public:
    UCreativeDeferredTaskComponent();
private:
    UFUNCTION(BlueprintCallable)
    void CancelAllTasks();
    
};

