#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETwitchViewerStatusType : uint8 
{
	TwitchViewerStatus_Nonsubscriber,
	TwitchViewerStatus_Subscriber,
	TwitchViewerStatus_Broadcaster,
	TwitchViewerStatus_Max,
};
