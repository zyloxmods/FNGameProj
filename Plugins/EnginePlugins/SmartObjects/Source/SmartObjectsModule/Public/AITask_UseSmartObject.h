#pragma once
#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "GameplayTask.h"
#include "AITask_UseSmartObject.generated.h"

class AAIController;
class AActor;
class UAITask_MoveTo;
class UAITask_UseSmartObject;
class USmartObjectComponent;

UCLASS(Blueprintable)
class SMARTOBJECTSMODULE_API UAITask_UseSmartObject : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USmartObjectComponent* SOComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayTask::FGenericGameplayTaskDelegate OnFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAITask_MoveTo* MoveToTask;
    
public:
    UFUNCTION(BlueprintCallable)
    static UAITask_UseSmartObject* UseSmartObject(AAIController* Controller, AActor* SmartObjectActor, USmartObjectComponent* SmartObjectComponent, bool bLockAILogic);
    
};

