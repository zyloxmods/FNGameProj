#pragma once
#include "CoreMinimal.h"
#include "OnFinishedCharacterCustomizationDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedCharacterCustomization, AFortPlayerPawn*, Pawn);

