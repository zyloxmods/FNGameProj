#pragma once
#include "CoreMinimal.h"
#include "OnCaptureLockBrokenDelegate.generated.h"

class AAthenaCapturePoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCaptureLockBroken, AAthenaCapturePoint*, CapturePoint, uint8, LockTeam, uint8, BreakTeam);

