#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AsyncTaskResult.h"
#include "AsyncTaskQueue.generated.h"

class UAsyncTask;

UCLASS(Blueprintable)
class UAsyncTaskQueue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAsyncTask*> TaskQueue_Internal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncTask* CurrentTask;
    
public:
    UAsyncTaskQueue();
private:
    UFUNCTION(BlueprintCallable)
    void OnAsyncTaskFinished(const FAsyncTaskResult& Result);
    
};

