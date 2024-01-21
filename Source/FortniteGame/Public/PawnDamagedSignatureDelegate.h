#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PawnDamagedSignatureDelegate.generated.h"

class AActor;
class AController;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FPawnDamagedSignature, AActor*, DamagedActor, float, Damage, AController*, InstigatedBy, AActor*, DamageCauser, FVector, HitLocation, UPrimitiveComponent*, FHitComponent, FName, BoneName, FVector, Momentum);

