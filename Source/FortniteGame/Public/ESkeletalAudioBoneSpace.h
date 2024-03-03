#pragma once
#include "CoreMinimal.h"
#include "ESkeletalAudioBoneSpace.generated.h"

UENUM(BlueprintType)
enum class ESkeletalAudioBoneSpace : uint8 {
    Relative,
    World,
};

