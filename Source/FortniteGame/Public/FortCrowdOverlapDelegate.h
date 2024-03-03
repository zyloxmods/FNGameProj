#pragma once
#include "CoreMinimal.h"
#include "FortCrowdOverlapDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortCrowdOverlap, AFortPawn*, OtherPawn);

