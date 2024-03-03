#pragma once
#include "CoreMinimal.h"
#include "FortAIPawnCustomizationsLoadedDelegate.generated.h"

class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortAIPawnCustomizationsLoaded, AFortPawn*, ThisPawn);

