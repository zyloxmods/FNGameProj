#pragma once
#include "CoreMinimal.h"
#include "OnFocalPointActorChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocalPointActorChanged, AActor*, NewFocalActor);

