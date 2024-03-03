#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_StandingPawnAnimAsset.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FFortAnimInput_StandingPawnAnimAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* UpperBodyAdditivePoseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* TargetingPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* NonTargetingPose;
    
    FORTNITEGAME_API FFortAnimInput_StandingPawnAnimAsset();
};

