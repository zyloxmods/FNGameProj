#pragma once

#include "CoreMinimal.h"

UENUM()
namespace Body {
	enum EFortCustomBodyType
	{
		NONE = 0,
		Small = 1,
		Medium = 2,
		MediumAndSmall = 3,
		Large = 4,
		LargeAndSmall = 5,
		LargeAndMedium = 6,
		All = 7,
		Deprecated = 8,
		EFortCustomBodyType_MAX = 9
	};
}