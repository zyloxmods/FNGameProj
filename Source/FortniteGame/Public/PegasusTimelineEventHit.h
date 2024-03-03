#pragma once
#include "CoreMinimal.h"
#include "PegasusAdditionalTagInfo.h"
#include "PegasusTimelineEventHit.generated.h"

USTRUCT(BlueprintType)
struct FPegasusTimelineEventHit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PGS_HitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PGS_ScalarValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PGS_ReplayStartTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PGS_ReplayEndTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FPegasusAdditionalTagInfo> PGS_AdditionalTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PGS_ClipRelativeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PGS_ClipRelativeEndTime;
    
    FORTNITEGAME_API FPegasusTimelineEventHit();
};

