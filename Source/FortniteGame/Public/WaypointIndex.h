#pragma once
#include "CoreMinimal.h"
#include "WaypointIndex.generated.h"

USTRUCT(BlueprintType)
struct FWaypointIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 WaypointGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 WaypointIndex;
    
    FORTNITEGAME_API FWaypointIndex();
};

