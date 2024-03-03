#pragma once
#include "CoreMinimal.h"
#include "OnPhysicsObjectAwakeChangedDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPhysicsObjectAwakeChanged, UPrimitiveComponent*, SimulatingComponent, bool, bIsAwake);

