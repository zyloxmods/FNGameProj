#pragma once
#include "CoreMinimal.h"
#include "OnCaptureLockDelegate.generated.h"

class AAthenaCapturePoint;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCaptureLock, AAthenaCapturePoint*, CapturePoint, uint8, LockTeam, bool, bIsNewLock);

