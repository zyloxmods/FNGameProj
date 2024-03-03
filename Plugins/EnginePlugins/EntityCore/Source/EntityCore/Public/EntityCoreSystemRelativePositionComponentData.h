#pragma once
#include "CoreMinimal.h"
#include "ComponentData.h"
#include "EntityCoreSystemRelativePositionComponentData.generated.h"

USTRUCT(BlueprintType)
struct FEntityCoreSystemRelativePositionComponentData : public FComponentData {
    GENERATED_BODY()
public:
    ENTITYCORE_API FEntityCoreSystemRelativePositionComponentData();
};

