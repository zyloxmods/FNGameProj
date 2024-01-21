#pragma once
#include "CoreMinimal.h"
#include "OnCornerstoneDamagedDelegate.generated.h"

class AFortPvPBaseCornerstone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCornerstoneDamaged, AFortPvPBaseCornerstone*, Cornerstone, float, DamageTaken);

