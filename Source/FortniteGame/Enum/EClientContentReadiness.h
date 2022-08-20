#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EClientContentReadiness : uint8 
{
	ReceivingContentNames,
	DownloadingContent,
	MountingContent,
	ReadyToJoin,
	FailedToMount,
	NotConnected,
	ConnectionFailed,
	CelluarDataRefusal,
	CancelledDownloadContent,
	None,
	EClientContentReadiness_MAX,
};
