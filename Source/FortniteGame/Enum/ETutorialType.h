#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ETutorialType : uint8 
{
	Callout,
	GuardScreen,
	WidgetIntro,
	Highlight,
	ETutorialType_MAX,
};
