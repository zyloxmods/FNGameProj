#pragma once
#include "CoreMinimal.h"
#include "OnActorEnterExitVolumeDelegate.generated.h"

class AActor;
class AFortVolume;
class APawn;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnActorEnterExitVolume, AActor*, Actor, UPrimitiveComponent*, ActorComponent, APawn*, InstigatorPawn, AFortVolume*, Volume);

