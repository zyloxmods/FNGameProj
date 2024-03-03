#pragma once
#include "CoreMinimal.h"
#include "ELicensedAudioTreatment.generated.h"

UENUM(BlueprintType)
enum class ELicensedAudioTreatment : uint8 {
    None,
    MuteOthers,
    MuteAll,
};

