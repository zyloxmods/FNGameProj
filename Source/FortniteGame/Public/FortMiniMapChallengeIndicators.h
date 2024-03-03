#pragma once
#include "CoreMinimal.h"
#include "FortMiniMapIndicator.h"
#include "FortMiniMapChallengeIndicators.generated.h"

class AFortPlayerControllerAthena;
class UAthenaChallengeIndicatorCache;

UCLASS(Abstract, Blueprintable)
class UFortMiniMapChallengeIndicators : public UFortMiniMapIndicator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* AthenaPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaChallengeIndicatorCache* ChallengeIndicatorCache;
    
public:
    UFortMiniMapChallengeIndicators();
};

