#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ComponentData.h"
#include "EntityScaleComponentData.generated.h"

USTRUCT(BlueprintType)
struct FEntityScaleComponentData : public FComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldScale3D;
    
    ENTITYCORE_API FEntityScaleComponentData();
};

