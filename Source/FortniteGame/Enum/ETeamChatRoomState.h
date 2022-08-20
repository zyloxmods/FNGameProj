#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETeamChatRoomState : uint8 
{
	Creating,
	Created,
	Timeout,
	ETeamChatRoomState_MAX,
};
