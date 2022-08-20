#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAthenaGameMsgType : uint8 
{
	DefaultIntro,
	DefaultMessage,
	DefaultCriticalMessage,
	CommIntro,
	CommMessage,
	CommCriticalMessage,
	CornerIntro,
	CornerMessage,
	CornerCriticalMessage,
	RespawnTurningOffWarning,
	RespawnOffWarning,
	CenterMessage,
	CenterImportantMessage,
	CenterCriticalMessage,
	EAthenaGameMsgType_MAX,
};
