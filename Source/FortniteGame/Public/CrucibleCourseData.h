#pragma once
#include "CoreMinimal.h"
#include "CrucibleSegmentData.h"
#include "CrucibleCourseData.generated.h"

USTRUCT(BlueprintType)
struct FCrucibleCourseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrucibleSegmentData> SegmentsData;
    
    FORTNITEGAME_API FCrucibleCourseData();
};

