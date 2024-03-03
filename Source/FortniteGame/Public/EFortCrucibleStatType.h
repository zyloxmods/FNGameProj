#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleStatType.generated.h"

UENUM(BlueprintType)
enum class EFortCrucibleStatType : uint8 {
    CourseOverall,
    CourseSegment1,
    CourseSegment2,
    CourseSegment3,
    CourseSegment4,
    CourseSegment5,
    Count,
};

