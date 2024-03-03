#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortRespawnLogicData.h"
#include "FortRespawnLogicData_Teams.generated.h"

USTRUCT(BlueprintType)
struct FFortRespawnLogicData_Teams : public FFortRespawnLogicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TryPlaceByTeammates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AlsoPlaceBehindTeammates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxDistanceFromTeammates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinDistanceFromTeammates;
    
    FORTNITEGAME_API FFortRespawnLogicData_Teams();
};

