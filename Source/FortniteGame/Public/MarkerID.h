#pragma once
#include "CoreMinimal.h"
#include "MarkerID.generated.h"

USTRUCT(BlueprintType)
struct FMarkerID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceId;
    
    FORTNITEGAME_API FMarkerID();
};

