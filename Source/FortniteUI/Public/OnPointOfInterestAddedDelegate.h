#pragma once
#include "CoreMinimal.h"
#include "OnPointOfInterestAddedDelegate.generated.h"

class AActor;
class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPointOfInterestAdded, AActor*, PointOfInterest, FText, DisplayText, UTexture2D*, DisplayImage);

