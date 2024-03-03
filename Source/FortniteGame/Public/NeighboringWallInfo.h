#pragma once
#include "CoreMinimal.h"
#include "BuildingSupportCellIndex.h"
#include "EStructuralWallPosition.h"
#include "NeighboringWallInfo.generated.h"

class ABuildingSMActor;

USTRUCT(BlueprintType)
struct FNeighboringWallInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingSMActor> NeighboringActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingSupportCellIndex NeighboringCellIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStructuralWallPosition WallPosition;
    
    FORTNITEGAME_API FNeighboringWallInfo();
};

