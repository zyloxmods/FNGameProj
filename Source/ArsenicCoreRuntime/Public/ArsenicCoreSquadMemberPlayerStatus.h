#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.h"
#include "ArsenicCoreSquadMemberPlayerStatus.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FArsenicCoreSquadMemberPlayerStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* SquadMemberPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArsenicCorePlayerStatus SquadMemberPlayerStatus;
    
    ARSENICCORERUNTIME_API FArsenicCoreSquadMemberPlayerStatus();
};

