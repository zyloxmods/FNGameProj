#pragma once
#include "CoreMinimal.h"
#include "EFortUrlType.generated.h"

UENUM(BlueprintType)
enum class EFortUrlType : uint8 {
    NormalWebLink,
    AccountCreationLink,
    HelpLink,
    EULALink,
};

