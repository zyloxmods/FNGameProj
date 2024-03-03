#pragma once
#include "CoreMinimal.h"
#include "EFortContentEncryptionAllowedReferences.generated.h"

UENUM()
enum class EFortContentEncryptionAllowedReferences : int32 {
    None,
    SoftOnly,
    Any,
};

