#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "PlayerStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Within=PlayerState, meta=(BlueprintSpawnableComponent))
class MODULARGAMEPLAY_API UPlayerStateComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UPlayerStateComponent();
};

