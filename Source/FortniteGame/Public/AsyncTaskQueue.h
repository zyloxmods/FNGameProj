#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AsyncTaskResult.h"
#include "AsyncTaskQueue.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UAsyncTaskQueue : public UObject {
    GENERATED_BODY()
public:
    UAsyncTaskQueue();
private:
    UFUNCTION(BlueprintCallable)
    void OnAsyncTaskFinished(const FAsyncTaskResult& Result);
    
};

