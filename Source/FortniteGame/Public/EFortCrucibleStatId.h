#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleStatId.generated.h"

UENUM(BlueprintType)
enum class EFortCrucibleStatId : uint8 {
    Gamepad_CourseOverall,
    Gamepad_CourseSegment1,
    Gamepad_CourseSegment2,
    Gamepad_CourseSegment3,
    Gamepad_CourseSegment4,
    Gamepad_CourseSegment5,
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
};

