#pragma once
#include "CoreMinimal.h"
#include "TeamPlacementData.generated.h"

class AFortTeamInfoAthena;

USTRUCT(BlueprintType)
struct FTeamPlacementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AFortTeamInfoAthena* TeamInfoAthena;
    
    FORTNITEGAME_API FTeamPlacementData();
};

