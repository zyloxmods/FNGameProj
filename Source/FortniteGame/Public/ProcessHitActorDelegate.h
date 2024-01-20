#pragma once
#include "CoreMinimal.h"
#include "ProcessHitActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FProcessHitActor, AActor*, HitActor);

