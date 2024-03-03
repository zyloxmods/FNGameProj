#pragma once
#include "CoreMinimal.h"
#include "ESkeletalAudioBoneVelocityType.generated.h"

UENUM(BlueprintType)
enum class ESkeletalAudioBoneVelocityType : uint8 {
    Linear,
    Rotational,
    Custom,
};

