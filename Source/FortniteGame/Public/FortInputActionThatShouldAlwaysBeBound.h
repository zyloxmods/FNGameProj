#pragma once
#include "CoreMinimal.h"
#include "FortInputActionThatShouldAlwaysBeBound.generated.h"

USTRUCT(BlueprintType)
struct FFortInputActionThatShouldAlwaysBeBound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AlternateActionNames;
    
    FORTNITEGAME_API FFortInputActionThatShouldAlwaysBeBound();
};

