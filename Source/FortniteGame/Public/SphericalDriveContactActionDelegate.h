#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SphericalDriveContactActionDelegate.generated.h"

class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSphericalDriveContactAction, const FVector&, Location, const FVector&, Normal, const float, Magnitude, UPrimitiveComponent*, HitComponent);

