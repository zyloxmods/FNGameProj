#pragma once
#include "CoreMinimal.h"
#include "BuildingSupportCellIndex.h"
#include "NeighboringCenterCellInfo.generated.h"

class ABuildingSMActor;

USTRUCT(BlueprintType)
struct FNeighboringCenterCellInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingSMActor> NeighboringActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingSupportCellIndex NeighboringCellIdx;
    
    FORTNITEGAME_API FNeighboringCenterCellInfo();
};

