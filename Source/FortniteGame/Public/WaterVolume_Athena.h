#pragma once
#include "CoreMinimal.h"
#include "WaterVolume_Shallow.h"
#include "WaterVolume_Athena.generated.h"

UCLASS(Blueprintable)
class AWaterVolume_Athena : public AWaterVolume_Shallow {
    GENERATED_BODY()
public:
    AWaterVolume_Athena();
};

