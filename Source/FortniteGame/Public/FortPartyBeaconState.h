#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "PartyBeaconState.h"
#include "EmptyServerReservation.h"
#include "FortPartyBeaconState.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortPartyBeaconState : public UPartyBeaconState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl GameSessionOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyServerReservation ReservationData;
    
public:
    UFortPartyBeaconState();
};

