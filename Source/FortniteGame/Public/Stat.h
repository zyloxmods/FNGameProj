#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EStatRecordingPeriod.h"
#include "Stat.generated.h"

UCLASS(Blueprintable)
class UStat : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStatRecordingPeriod HighestPeriodToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AbsoluteMaxValue;
    
    UStat();
};

