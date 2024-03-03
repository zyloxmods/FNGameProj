#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HiddenFromMinimapComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHiddenFromMinimapComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UHiddenFromMinimapComponent();
};

