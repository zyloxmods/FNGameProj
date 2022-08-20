#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EPublishStatus : uint8 
{
	CannotPublish,
	NeedsCreatorName,
	CanPublishProvisionally,
	CanPublish,
	EPublishStatus_MAX,
};
