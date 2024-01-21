#pragma once
#include "CoreMinimal.h"
#include "BuildingSupportCellIndex.h"
#include "EStructuralFloorPosition.h"
#include "NeighboringFloorInfo.generated.h"

class ABuildingSMActor;

USTRUCT(BlueprintType)
struct FNeighboringFloorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingSMActor> NeighboringActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingSupportCellIndex NeighboringCellIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStructuralFloorPosition FloorPosition;
    
    FORTNITEGAME_API FNeighboringFloorInfo();
};

