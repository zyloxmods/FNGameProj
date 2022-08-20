#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortWorldManagerState : uint8 
{
	WMS_QueryingWorld,
	WMS_WorldQueryComplete,
	WMS_CreatingNewWorld,
	WMS_LoadingExistingWorld,
	WMS_Running,
	WMS_Failed,
	WMS_MAX,
};
