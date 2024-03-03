#pragma once
#include "CoreMinimal.h"
#include "CachedSeatCollision.generated.h"

USTRUCT(BlueprintType)
struct FCachedSeatCollision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SeatIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOccupied;
    
    HOAGIERUNTIME_API FCachedSeatCollision();
};

