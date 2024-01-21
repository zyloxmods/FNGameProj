#pragma once
#include "CoreMinimal.h"
#include "PartyBeaconState.h"
#include "EFortSessionHelperJoinResult.h"
#include "EMatchmakingState.h"
#include "FortSearchPassState.generated.h"

USTRUCT(BlueprintType)
struct FFortSearchPassState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BestSessionIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortSessionHelperJoinResult FailureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMatchmakingState::Type> MatchmakingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPartyReservationResult::Type> LastBeaconResponse;
    
    FORTNITEGAME_API FFortSearchPassState();
};

