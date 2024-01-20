#pragma once
#include "CoreMinimal.h"
#include "FortMatchAnalytics.h"
#include "FortMatchServerAnalytics.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortMatchServerAnalytics : public UFortMatchAnalytics {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayersCompletingPhasePercentage;
    
public:
    UFortMatchServerAnalytics();
};

