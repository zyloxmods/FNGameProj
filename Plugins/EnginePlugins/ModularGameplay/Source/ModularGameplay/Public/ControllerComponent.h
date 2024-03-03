#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "ControllerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=Controller, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UControllerComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UControllerComponent();
};

