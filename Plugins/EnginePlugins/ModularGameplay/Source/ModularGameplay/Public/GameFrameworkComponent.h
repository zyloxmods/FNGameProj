#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFrameworkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UGameFrameworkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UGameFrameworkComponent();
};

