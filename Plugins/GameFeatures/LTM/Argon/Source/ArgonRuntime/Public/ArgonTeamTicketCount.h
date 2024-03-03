#pragma once
#include "CoreMinimal.h"
#include "ArgonTeamTicketCount.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FArgonTeamTicketCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* RecentTicketPickedUpByPlayer;
    
    ARGONRUNTIME_API FArgonTeamTicketCount();
};

