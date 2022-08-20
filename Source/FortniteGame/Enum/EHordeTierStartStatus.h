#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHordeTierStartStatus : uint8 
{
	WaitingForPlayer,
	WaitingForDBM,
	GenericNotReadyToStart,
	EHordeTierStartStatus_MAX,
};
