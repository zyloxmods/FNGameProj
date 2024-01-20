#pragma once
#include "CoreMinimal.h"
#include "EFortUIFeature.h"
#include "FortFeatureNavigateOpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortFeatureNavigateOp, EFortUIFeature, Feature);

