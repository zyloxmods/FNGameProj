#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TowhookYankDelegateDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTowhookYankDelegate, const FVector&, YankForce, UPrimitiveComponent*, YankedComponent);

