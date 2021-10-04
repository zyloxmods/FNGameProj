#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortPersistableItemDefinition.h"
#include "FortMedalsPunchCardItemDefinition.generated.h"

UCLASS()
class FORTNITEGAME_API UFortMedalsPunchCardItemDefinition : public UFortPersistableItemDefinition
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
        int NumPunches;

    UPROPERTY(EditAnywhere)
        bool bAllowMedalReplacement;

    //Missed Offset

    UPROPERTY(EditAnywhere)
        FScalableFloat PunchCardXpRewards;

    UPROPERTY(EditAnywhere)
        FScalableFloat PunchCardRestXp;
};