#pragma once

#include "CoreMinimal.h"

UENUM()
enum class ESkeletalAudioBoneEvent : uint8 
{
	SlowThresholdStart,
	SlowThresholdStop,
	MediumThreshold,
	FastThreshold,
	ESkeletalAudioBoneEvent_MAX,
};
