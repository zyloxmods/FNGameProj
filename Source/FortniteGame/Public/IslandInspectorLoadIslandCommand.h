#pragma once
#include "CoreMinimal.h"
#include "AsyncTaskResult.h"
#include "IslandInspectorCommand.h"
#include "IslandInspectorLoadIslandCommand.generated.h"

UCLASS(Blueprintable)
class UIslandInspectorLoadIslandCommand : public UIslandInspectorCommand {
    GENERATED_BODY()
public:
    UIslandInspectorLoadIslandCommand();
private:
    UFUNCTION(BlueprintCallable)
    void OnIslandLoaded(const FAsyncTaskResult& Result);
    
};

