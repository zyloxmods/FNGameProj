#pragma once
#include "CoreMinimal.h"
#include "ActorHealthChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActorHealthChanged, AActor*, Actor, float, NewHealth);

