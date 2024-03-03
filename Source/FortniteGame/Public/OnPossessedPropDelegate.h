#pragma once
#include "CoreMinimal.h"
#include "OnPossessedPropDelegate.generated.h"

class ABuildingGameplayActorPlayerPropAttachment;
class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPossessedProp, AFortPlayerPawn*, FortPlayerPawn, ABuildingGameplayActorPlayerPropAttachment*, PossessedProp);

