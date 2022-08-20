#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortFeedbackContext : uint8 
{
	FFC_Recipient,
	FFC_TeamWitness,
	FFC_EnemyWitness,
	FFC_AllPawns,
	FFC_Announcer,
	FFC_None_Max,
	FFC_MAX,
};
