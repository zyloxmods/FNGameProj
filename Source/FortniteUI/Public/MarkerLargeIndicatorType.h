#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MarkerLargeIndicatorType.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMarkerLargeIndicatorType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MarkerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ImageSize;
    
    FORTNITEUI_API FMarkerLargeIndicatorType();
};

