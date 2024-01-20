#pragma once
#include "CoreMinimal.h"
#include "BuildingEditModeSupport_BinaryToggle.h"
#include "BuildingEditModeSupport_Floor.generated.h"

UCLASS(Blueprintable)
class UBuildingEditModeSupport_Floor : public UBuildingEditModeSupport_BinaryToggle {
    GENERATED_BODY()
public:
    UBuildingEditModeSupport_Floor();
};

