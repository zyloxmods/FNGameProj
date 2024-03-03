#pragma once
#include "CoreMinimal.h"
#include "OnRemovedSelectedActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRemovedSelectedActor, AActor*, DeselectedActor, int32, NumSelectedActor);

