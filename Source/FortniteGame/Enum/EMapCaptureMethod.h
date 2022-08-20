#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EMapCaptureMethod : uint8 
{
	LiveCapture,
	StaticCapture,
	EMapCaptureMethod_MAX,
};
