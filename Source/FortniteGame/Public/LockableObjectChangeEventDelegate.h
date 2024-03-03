#pragma once
#include "CoreMinimal.h"
#include "LockableObjectChangeEventDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockableObjectChangeEvent, AActor*, LockableActorFound);

