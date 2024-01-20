#pragma once
#include "CoreMinimal.h"
#include "ScriptedAction.generated.h"

USTRUCT(BlueprintType)
struct FScriptedAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Template;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ParamMap;
    
    FORTNITEGAME_API FScriptedAction();
};

