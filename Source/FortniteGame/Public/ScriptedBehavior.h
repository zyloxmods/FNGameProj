#pragma once
#include "CoreMinimal.h"
#include "ScriptedAction.h"
#include "ScriptedBehavior.generated.h"

USTRUCT(BlueprintType)
struct FScriptedBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScriptName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptedAction> Actions;
    
    FORTNITEGAME_API FScriptedBehavior();
};

