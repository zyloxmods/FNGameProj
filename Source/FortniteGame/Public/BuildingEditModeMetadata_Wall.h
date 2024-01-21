#pragma once
#include "CoreMinimal.h"
#include "BuildingEditModeMetadata_BinaryToggle.h"
#include "BuildingEditModeMetadata_Wall.generated.h"

UCLASS(Blueprintable)
class UBuildingEditModeMetadata_Wall : public UBuildingEditModeMetadata_BinaryToggle {
    GENERATED_BODY()
public:
    UBuildingEditModeMetadata_Wall();
};

