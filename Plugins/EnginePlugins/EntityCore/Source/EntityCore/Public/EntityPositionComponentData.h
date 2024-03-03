#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ComponentData.h"
#include "EntityPositionComponentData.generated.h"

USTRUCT(BlueprintType)
struct FEntityPositionComponentData : public FComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldPosition;
    
    ENTITYCORE_API FEntityPositionComponentData();
};

