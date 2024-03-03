#pragma once
#include "CoreMinimal.h"
#include "EFortFeedbackSelectionMethod.generated.h"

UENUM(BlueprintType)
enum EFortFeedbackSelectionMethod {
    FFSM_Instigator,
    FFSM_Recipient,
    FFSM_TeamWitness,
    FFSM_EnemyWitness,
    FFSM_Random,
    FFSM_Priority_IRTE,
    FFSM_AllPawns,
    FFSM_Announcer,
    FFSM_MAX UMETA(Hidden),
};

