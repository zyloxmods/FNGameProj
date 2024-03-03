#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "FortTimeSynthTrackComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortTimeSynthTrackComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UFortTimeSynthTrackComponent();
};

