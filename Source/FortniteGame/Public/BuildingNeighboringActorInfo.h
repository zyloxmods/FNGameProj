#pragma once
#include "CoreMinimal.h"
#include "NeighboringCenterCellInfo.h"
#include "NeighboringFloorInfo.h"
#include "NeighboringWallInfo.h"
#include "BuildingNeighboringActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FBuildingNeighboringActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNeighboringWallInfo> NeighboringWallInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNeighboringFloorInfo> NeighboringFloorInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNeighboringCenterCellInfo> NeighboringCenterCellInfos;
    
    FORTNITEGAME_API FBuildingNeighboringActorInfo();
};

