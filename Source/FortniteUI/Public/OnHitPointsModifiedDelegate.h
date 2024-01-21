#pragma once
#include "CoreMinimal.h"
#include "EFortHitPointModificationReason.h"
#include "OnHitPointsModifiedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHitPointsModified, float, HitPointValue, EFortHitPointModificationReason, ModificationReason);

