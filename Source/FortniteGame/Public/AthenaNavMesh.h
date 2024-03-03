#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortNavMesh.h"
#include "AthenaNavMesh.generated.h"

UCLASS(Blueprintable)
class AAthenaNavMesh : public AFortNavMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HotSpotPathfindingMaxSearchNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBox> SerializedDirtyAreas;
    
public:
    AAthenaNavMesh();
    UFUNCTION(BlueprintCallable)
    void MoveTiles(const FBox& SourceBox, const FIntPoint& TileOffset, const float RotationDeg, const FVector2D& FillerTilePosition);
    
    UFUNCTION(BlueprintCallable)
    void ComputeOffsetForMoveTiles(const FVector& StartPosition, const FVector& DesiredPosition, FVector& OutEndPosition, FIntPoint& OutTileOffset);
    
};

