#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EFortInputActionType.h"
#include "FortInputActionKeyAlias.generated.h"

USTRUCT(BlueprintType)
struct FFortInputActionKeyAlias {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey KeyAlias;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortInputActionType InputActionType;
    
    FORTNITEGAME_API FFortInputActionKeyAlias();
};

