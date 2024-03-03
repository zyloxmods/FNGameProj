#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "FortEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortEngine : public UGameEngine {
    GENERATED_BODY()
public:
    UFortEngine();
private:
    UFUNCTION(BlueprintCallable, Exec)
    void StartFortBench(const FString& ReplayName);
    
};

