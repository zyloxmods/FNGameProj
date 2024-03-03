#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "OnTraceProcessCompleteDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnTraceProcessComplete, bool, Succeeded, const AActor*, ActorHit, FHitResult, HitResult);

