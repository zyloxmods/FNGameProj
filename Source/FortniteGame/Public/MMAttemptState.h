#pragma once
#include "CoreMinimal.h"
#include "PartyBeaconState.h"
#include "EMatchmakingState.h"
#include "MMAttemptState.generated.h"

USTRUCT(BlueprintType)
struct FMMAttemptState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BestSessionIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSearchResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMatchmakingState::Type> State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPartyReservationResult::Type> LastBeaconResponse;
    
    FORTNITEGAME_API FMMAttemptState();
};

