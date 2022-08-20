#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAccountLinkingUIConfig : uint8 
{
	Default,
	ExternalViewerOnly,
	FullExternal,
	EFortAccountLinkingUIConfig_MAX,
};
