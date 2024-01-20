#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponTriggerType.generated.h"

UENUM(BlueprintType)
namespace EFortWeaponTriggerType {
    enum Type {
        OnPress,
        Automatic,
        OnRelease,
        OnPressAndRelease,
    };
}

