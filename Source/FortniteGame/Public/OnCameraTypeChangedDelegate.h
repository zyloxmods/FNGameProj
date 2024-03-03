#pragma once
#include "CoreMinimal.h"
#include "ESpectatorCameraType.h"
#include "OnCameraTypeChangedDelegate.generated.h"

class AFortPlayerControllerSpectating;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCameraTypeChanged, AFortPlayerControllerSpectating*, SpectatorPC, ESpectatorCameraType, NewCameraType);

