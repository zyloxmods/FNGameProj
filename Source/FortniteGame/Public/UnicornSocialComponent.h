#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UnicornSocialComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UUnicornSocialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UUnicornSocialComponent();
};

