#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCurieSpatialGrid.h"
#include "FortCurieElementSpatialGrid.generated.h"

class AActor;
class UFortCurieFireNavRelevantObject;

USTRUCT(BlueprintType)
struct FFortCurieElementSpatialGrid : public FFortCurieSpatialGrid {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, UFortCurieFireNavRelevantObject*> NavRelevantObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortCurieFireNavRelevantObject*> NavRelevantPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> PendingVoxelizationActors;
    
public:
    FORTNITEGAME_API FFortCurieElementSpatialGrid();
};

