#pragma once
#include "CoreMinimal.h"
#include "FortGameModeZone.h"
#include "FortGamePvPBase.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class AFortGamePvPBase : public AFortGameModeZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumTeams;
    
public:
    AFortGamePvPBase();
};

