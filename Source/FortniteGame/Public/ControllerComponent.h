#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=Controller, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UControllerComponent();
};

