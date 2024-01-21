#pragma once
#include "CoreMinimal.h"
#include "TeamStrategicBuildingHandle.generated.h"

USTRUCT(BlueprintType)
struct FTeamStrategicBuildingHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
    FORTNITEGAME_API FTeamStrategicBuildingHandle();
};

