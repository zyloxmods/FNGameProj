#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortPersistableItemDefinition.h"
#include "FortItemDefinition.h"
#include "RepeatableDailiesCardDateOverride.h"
#include "FortRepeatableDailiesCardItemDefinition.generated.h"

UCLASS()
class FORTNITEGAME_API UFortRepeatableDailiesCardItemDefinition : public UFortPersistableItemDefinition
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere)
        FString GranterQuestPack;

    UPROPERTY(EditAnywhere)
        int FillCount;

    //Missed Offset

    UPROPERTY(EditAnywhere)
        FScalableFloat ReplacedRestedXpValue;

    UPROPERTY(EditAnywhere)
        FScalableFloat ReducedXPReward;

    UPROPERTY(EditAnywhere)
        FScalableFloat ReplacedRestedXpValueScalarForMissedDays;

    UPROPERTY(EditAnywhere)
        TSoftObjectPtr<UFortItemDefinition> RequiredItemDef;

    UPROPERTY(EditAnywhere)
        TArray<FRepeatableDailiesCardDateOverride>  DateOverrides;

};