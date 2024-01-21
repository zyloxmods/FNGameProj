#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EFortInputActionType.h"
#include "FortInputActionDetails.generated.h"

USTRUCT(BlueprintType)
struct FFortInputActionDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortInputActionType InputActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey ActionKey;
    
    FORTNITEGAME_API FFortInputActionDetails();
};

