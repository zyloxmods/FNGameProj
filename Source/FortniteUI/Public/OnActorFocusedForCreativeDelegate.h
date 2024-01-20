#pragma once
#include "CoreMinimal.h"
#include "OnActorFocusedForCreativeDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActorFocusedForCreative, AActor*, FocusedActor);

