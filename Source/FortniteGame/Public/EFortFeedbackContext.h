#pragma once
#include "CoreMinimal.h"
#include "EFortFeedbackContext.generated.h"

UENUM(BlueprintType)
enum EFortFeedbackContext {
    FFC_Instigator,
    FFC_Recipient,
    FFC_TeamWitness,
    FFC_EnemyWitness,
    FFC_AllPawns,
    FFC_Announcer,
    FFC_None_Max,
    FFC_MAX UMETA(Hidden),
};

