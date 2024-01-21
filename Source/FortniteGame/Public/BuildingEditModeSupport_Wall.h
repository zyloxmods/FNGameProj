#pragma once
#include "CoreMinimal.h"
#include "BuildingEditModeSupport_BinaryToggle.h"
#include "BuildingEditModeSupport_Wall.generated.h"

UCLASS(Blueprintable)
class UBuildingEditModeSupport_Wall : public UBuildingEditModeSupport_BinaryToggle {
    GENERATED_BODY()
public:
    UBuildingEditModeSupport_Wall();
};

