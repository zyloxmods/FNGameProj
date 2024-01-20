#pragma once
#include "CoreMinimal.h"
#include "ELevelSaveCategory.generated.h"

UENUM(BlueprintType)
enum class ELevelSaveCategory : uint8 {
    ActorInstance,
    VolumeInfoActor,
};

