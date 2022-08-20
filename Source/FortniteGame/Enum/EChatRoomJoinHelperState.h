#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EChatRoomJoinHelperState : uint8 
{
	AttemptingJoin,
	Joined,
	AttemptingLeave,
	EChatRoomJoinHelperState_MAX,
};
