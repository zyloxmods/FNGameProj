#pragma once
#include "CoreMinimal.h"
#include "OnHeldObjectChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeldObjectChanged, AActor*, HeldObject);

