#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WaterBodyGenerator.generated.h"

UCLASS(Abstract, Blueprintable)
class UWaterBodyGenerator : public UObject {
    GENERATED_BODY()
public:
    UWaterBodyGenerator();
};

