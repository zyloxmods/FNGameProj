#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFeedbackSelectionMethod : uint8 
{
	FFSM_Recipient,
	FFSM_TeamWitness,
	FFSM_EnemyWitness,
	FFSM_Random,
	FFSM_Priority_IRTE,
	FFSM_AllPawns,
	FFSM_Announcer,
	FFSM_MAX,
};
