#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortEventRepeat : uint8 
{
	EFER_Always,
	EFER_OncePerPlayer,
	EFER_OncePerCampaign,
	EFER_OncePerMap,
	EFER_MAX,
};
