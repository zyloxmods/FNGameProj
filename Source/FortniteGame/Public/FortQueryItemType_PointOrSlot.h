#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"
#include "FortQueryItemType_PointOrSlot.generated.h"

UCLASS(Blueprintable)
class UFortQueryItemType_PointOrSlot : public UEnvQueryItemType_Point {
    GENERATED_BODY()
public:
    UFortQueryItemType_PointOrSlot();
};

