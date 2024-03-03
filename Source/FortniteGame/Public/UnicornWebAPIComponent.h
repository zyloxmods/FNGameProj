#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnicornWebAPIComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUnicornWebAPIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUnicornWebAPIComponent();
};

