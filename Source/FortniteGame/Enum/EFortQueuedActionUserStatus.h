#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortQueuedActionUserStatus : uint8 
{
	Failed,
	WaitingForCloudRequest,
	WaitingForProfileSave,
	EFortQueuedActionUserStatus_MAX,
};
