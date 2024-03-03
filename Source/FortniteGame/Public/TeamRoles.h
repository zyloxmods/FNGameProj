#pragma once
#include "CoreMinimal.h"
#include "TeamRoles.generated.h"

USTRUCT(BlueprintType)
struct FTeamRoles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PusherTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DefenderTeam;
    
    FORTNITEGAME_API FTeamRoles();
};

