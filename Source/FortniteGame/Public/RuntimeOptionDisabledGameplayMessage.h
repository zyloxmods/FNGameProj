#pragma once
#include "CoreMinimal.h"
#include "RuntimeOptionDisabledGameplayMessage.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeOptionDisabledGameplayMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MessageOwnerClassName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MessageName;
    
    FORTNITEGAME_API FRuntimeOptionDisabledGameplayMessage();
};

