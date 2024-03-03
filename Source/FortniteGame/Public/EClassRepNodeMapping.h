#pragma once
#include "CoreMinimal.h"
#include "EClassRepNodeMapping.generated.h"

UENUM(BlueprintType)
enum EClassRepNodeMapping {
    NotRouted,
    RelevantAllConnections,
    RelevantAllInsideFortVolume,
    Spatialize_Static,
    Spatialize_Dynamic,
    Spatialize_Dormancy,
    Instance_Dynamic,
};

