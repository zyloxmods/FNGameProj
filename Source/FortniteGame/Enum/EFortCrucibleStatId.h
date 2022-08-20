#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortCrucibleStatId : uint8 
{
	KBM_CourseOverall,
	KBM_CourseSegment1,
	KBM_CourseSegment2,
	KBM_CourseSegment3,
	KBM_CourseSegment4,
	KBM_CourseSegment5,
	Touch_CourseOverall,
	Touch_CourseSegment1,
	Touch_CourseSegment2,
	Touch_CourseSegment3,
	Touch_CourseSegment4,
	Touch_CourseSegment5,
	Count,
	EFortCrucibleStatId_MAX,
};
