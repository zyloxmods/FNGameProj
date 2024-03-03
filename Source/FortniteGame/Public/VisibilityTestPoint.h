#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VisibilityTestPoint.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FVisibilityTestPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    FORTNITEGAME_API FVisibilityTestPoint();
};

