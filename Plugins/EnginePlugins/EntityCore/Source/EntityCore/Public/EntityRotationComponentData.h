#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ComponentData.h"
#include "EntityRotationComponentData.generated.h"

USTRUCT(BlueprintType)
struct FEntityRotationComponentData : public FComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator WorldRotation;
    
    ENTITYCORE_API FEntityRotationComponentData();
};

