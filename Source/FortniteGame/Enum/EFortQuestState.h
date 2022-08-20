#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortQuestState : uint8 
{
	Active,
	Completed,
	Claimed,
	EFortQuestState_MAX,
};
