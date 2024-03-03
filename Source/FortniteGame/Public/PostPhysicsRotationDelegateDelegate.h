#pragma once
#include "CoreMinimal.h"
#include "PostPhysicsRotationDelegateDelegate.generated.h"

class UCharacterMovementComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPostPhysicsRotationDelegate, UCharacterMovementComponent*, CharMoveComp, float, DeltaSeconds);

