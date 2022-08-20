#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWorldRecordState : uint8 
{
	WaitingForResponse,
	RetrievingTheaterInformation,
	RetrievingZoneInformation,
	LoadingWorldRecord,
	LoadingZoneRecord,
	SavingZoneRecord,
	SavingPlayerProfiles,
	SavingPlayerDeployableBases,
	Succeeded,
	Failed,
	Max_None,
	EFortWorldRecordState_MAX,
};
