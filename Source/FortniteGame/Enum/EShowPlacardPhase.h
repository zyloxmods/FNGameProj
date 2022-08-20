#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EShowPlacardPhase : uint8 
{
	StartShow,
	WaitBeforeInitialFadeOut,
	PreShowFadeOut,
	Show,
	FadeOut,
	PostShowFadeIn,
	DoneShowingScreen,
	MAX,
};
