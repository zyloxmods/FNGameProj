#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "AthenaBuildingActorChildComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAthenaBuildingActorChildComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
    UAthenaBuildingActorChildComponent();
};

