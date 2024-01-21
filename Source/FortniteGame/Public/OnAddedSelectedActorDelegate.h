#pragma once
#include "CoreMinimal.h"
#include "OnAddedSelectedActorDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAddedSelectedActor, AActor*, SelectedActor, int32, NumSelectedActor);

