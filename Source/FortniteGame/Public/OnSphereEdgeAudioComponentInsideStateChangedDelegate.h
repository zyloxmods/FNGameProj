#pragma once
#include "CoreMinimal.h"
#include "OnSphereEdgeAudioComponentInsideStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSphereEdgeAudioComponentInsideStateChanged, bool, bIsInside);

