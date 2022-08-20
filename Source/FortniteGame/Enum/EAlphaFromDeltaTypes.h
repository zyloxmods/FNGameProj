#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAlphaFromDeltaTypes : uint8 
{
	TranslationY,
	TranslationZ,
	Scale,
	ScaleX,
	ScaleY,
	ScaleZ,
	EulerX,
	EulerY,
	EulerZ,
	QuaternionTwist,
	EAlphaFromDeltaTypes_MAX,
};
