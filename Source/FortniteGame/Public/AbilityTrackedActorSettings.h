#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilityTrackedActorSettings.generated.h"

USTRUCT(BlueprintType)
struct FAbilityTrackedActorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaximumTrackedActors;
    
    FORTNITEGAME_API FAbilityTrackedActorSettings();
};

