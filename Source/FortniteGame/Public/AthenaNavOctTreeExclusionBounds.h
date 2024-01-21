#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AthenaNavOctTreeExclusionBounds.generated.h"

UCLASS(Blueprintable)
class AAthenaNavOctTreeExclusionBounds : public AVolume {
    GENERATED_BODY()
public:
    AAthenaNavOctTreeExclusionBounds();
};

