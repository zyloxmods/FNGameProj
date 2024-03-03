#pragma once
#include "CoreMinimal.h"
#include "FortMatchAnalytics.h"
#include "FortMatchServerAnalytics.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortMatchServerAnalytics : public UFortMatchAnalytics {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayersNotCompletingPhasePercentage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayersDisconnectingUnexpectedlyPercentage;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MatchStartThreshold;
    
public:
    UFortMatchServerAnalytics();
};

