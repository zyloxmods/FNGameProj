#pragma once
#include "CoreMinimal.h"
#include "EAileronRollDirection.h"
#include "FortRechargingActionTimer.h"
#include "AileronRoll.generated.h"

USTRUCT(BlueprintType)
struct FAileronRoll {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRechargingActionTimer Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAileronRollDirection Direction;
    
    FORTNITEGAME_API FAileronRoll();
};

