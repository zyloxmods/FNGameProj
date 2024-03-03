#pragma once
#include "CoreMinimal.h"
#include "OnStormShieldCreatedDelegate.generated.h"

class AFortMissionStormShield;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStormShieldCreated, AFortMissionStormShield*, Shield);

