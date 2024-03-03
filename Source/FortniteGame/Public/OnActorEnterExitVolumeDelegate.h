#pragma once
#include "CoreMinimal.h"
#include "OnActorEnterExitVolumeDelegate.generated.h"

class AActor;
class AFortVolume;
class APawn;
class UActorComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnActorEnterExitVolume, AActor*, Actor, UActorComponent*, ActorComponent, APawn*, InstigatorPawn, AFortVolume*, Volume);

