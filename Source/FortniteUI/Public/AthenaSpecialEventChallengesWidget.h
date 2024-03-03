#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengesWidget.h"
#include "AthenaSpecialEventChallengesWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpecialEventChallengesWidget : public UAthenaChallengesWidget {
    GENERATED_BODY()
public:
    UAthenaSpecialEventChallengesWidget();
private:
    UFUNCTION(BlueprintCallable)
    void HandleSpecialEventStarted(float TotalEventTime, float TimeRemaining, bool bIsAttacker, const FText& EventDescription);
    
    UFUNCTION(BlueprintCallable)
    void HandleSpecialEventEnded();
    
};

