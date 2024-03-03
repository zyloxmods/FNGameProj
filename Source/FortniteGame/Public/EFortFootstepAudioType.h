#pragma once
#include "CoreMinimal.h"
#include "EFortFootstepAudioType.generated.h"

UENUM(BlueprintType)
namespace EFortFootstepAudioType {
    enum Type {
        Crouch,
        CrouchSprint,
        Walk,
        Sprint,
        Jump,
        Land,
        LandHard,
        Max_None,
    };
}

