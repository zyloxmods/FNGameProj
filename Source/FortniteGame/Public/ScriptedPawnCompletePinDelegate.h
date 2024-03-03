#pragma once
#include "CoreMinimal.h"
#include "ScriptedPawnCompletePinDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScriptedPawnCompletePin, AFortPlayerPawn*, ScriptedPawn);

