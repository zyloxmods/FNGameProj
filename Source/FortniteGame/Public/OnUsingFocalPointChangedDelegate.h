#pragma once
#include "CoreMinimal.h"
#include "OnUsingFocalPointChangedDelegate.generated.h"

class AActor;
class AFortPlayerControllerAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUsingFocalPointChanged, AFortPlayerControllerAthena*, FocalPointUser, AActor*, FocalPointActor, bool, bUsingFocalPoint);

