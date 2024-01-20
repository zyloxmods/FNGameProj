#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeSetTile.h"
#include "AthenaChallengeSetTile_Event.generated.h"

class UAthenaChallengeCountdownDisplay;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeSetTile_Event : public UAthenaChallengeSetTile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeCountdownDisplay* Countdown_TimeRemaining;
    
public:
    UAthenaChallengeSetTile_Event();
};

