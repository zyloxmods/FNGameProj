#pragma once
#include "CoreMinimal.h"
#include "ProceduralFloatDataMap.h"
#include "ProceduralLandscapeLayerMap.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralLandscapeLayerMap : public UProceduralFloatDataMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LandscapeLayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LandscapeEditLayerName;
    
    UProceduralLandscapeLayerMap();
};

