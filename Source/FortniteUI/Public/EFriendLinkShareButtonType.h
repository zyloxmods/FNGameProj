#pragma once
#include "CoreMinimal.h"
#include "EFriendLinkShareButtonType.generated.h"

UENUM(BlueprintType)
enum class EFriendLinkShareButtonType : uint8 {
    IOS,
    Android,
    Generic,
};

