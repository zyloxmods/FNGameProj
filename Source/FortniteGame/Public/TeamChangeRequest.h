#pragma once
#include "CoreMinimal.h"
#include "TeamChangeRequest.generated.h"

class AFortPlayerController;

USTRUCT(BlueprintType)
struct FTeamChangeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* RequestingController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DesiredTeam;
    
    FORTNITEGAME_API FTeamChangeRequest();
};

