#pragma once
#include "CoreMinimal.h"
#include "RebootCardReplicatedState.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FRebootCardReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChipExpirationServerStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    FORTNITEGAME_API FRebootCardReplicatedState();
};

