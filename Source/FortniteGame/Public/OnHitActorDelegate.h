#pragma once
#include "CoreMinimal.h"
#include "OnHitActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitActor, AActor*, HitActor);

