#pragma once
#include "CoreMinimal.h"
#include "PartyBeaconState.h"
#include "EMatchmakingState.h"
#include "FortInviteSessionParams.generated.h"

USTRUCT(BlueprintType)
struct FFortInviteSessionParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMatchmakingState::Type> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FailureReason;
    
  //  UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
//    TEnumAsByte<EPartyReservationResult::Type> LastBeaconResponse;
    
    FORTNITEGAME_API FFortInviteSessionParams();
};

