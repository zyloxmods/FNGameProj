#pragma once
#include "CoreMinimal.h"
#include "ActorOverlapSignatureDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorOverlapSignature, AActor*, OverlappedActor, AActor*, OtherActor);

