#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PawnDeathEffectsSignatureDelegate.generated.h"

class AActor;
class AFortPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FPawnDeathEffectsSignature, AActor*, DeadActor, float, Damage, AFortPawn*, InstigatedBy, FVector, HitLocation, AActor*, DamageCauser);

