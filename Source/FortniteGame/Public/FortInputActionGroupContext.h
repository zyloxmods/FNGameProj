#pragma once
#include "CoreMinimal.h"
#include "EFortInputActionGroup.h"
#include "FortInputActionGroupContext.generated.h"

USTRUCT(BlueprintType)
struct FFortInputActionGroupContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortInputActionGroup InputActionGroup;
    
    FORTNITEGAME_API FFortInputActionGroupContext();
};

