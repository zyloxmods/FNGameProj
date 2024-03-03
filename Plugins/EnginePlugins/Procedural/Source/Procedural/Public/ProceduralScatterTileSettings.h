#pragma once
#include "CoreMinimal.h"
#include "EProceduralScatterTileRandomGenerator.h"
#include "ProceduralScatterTileSettings.generated.h"

USTRUCT(BlueprintType)
struct FProceduralScatterTileSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUniqueTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TileOverlapPercentage;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumQuadTreeSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProceduralScatterTileRandomGenerator RandomGenerator;
    
    PROCEDURAL_API FProceduralScatterTileSettings();
};

