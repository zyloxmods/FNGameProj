#pragma once
#include "CoreMinimal.h"
#include "BuildingEditModeMetadata_BinaryToggle.h"
#include "BuildingEditModeMetadata_Floor.generated.h"

UCLASS(Blueprintable)
class UBuildingEditModeMetadata_Floor : public UBuildingEditModeMetadata_BinaryToggle {
    GENERATED_BODY()
public:
    UBuildingEditModeMetadata_Floor();
};

