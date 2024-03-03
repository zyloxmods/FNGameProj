#pragma once
#include "CoreMinimal.h"
#include "ESimObjectRepNodeMapping.generated.h"

UENUM(BlueprintType)
enum ESimObjectRepNodeMapping {
    NotReplicated,
    RelevantAllInsidePlayspace,
    Spatial_Static,
    Spatial_Dynamic,
    Spatial_Dormancy,
};

