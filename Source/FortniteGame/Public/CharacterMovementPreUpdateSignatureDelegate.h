#pragma once
#include "CoreMinimal.h"
#include "CharacterMovementPreUpdateSignatureDelegate.generated.h"

class UCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterMovementPreUpdateSignature, UCharacterMovementComponent*, CharMoveComp, float, DeltaSeconds);

