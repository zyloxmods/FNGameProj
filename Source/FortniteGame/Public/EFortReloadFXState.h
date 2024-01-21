#pragma once
#include "CoreMinimal.h"
#include "EFortReloadFXState.generated.h"

UENUM(BlueprintType)
enum class EFortReloadFXState : uint8
{
        ReloadStart,
        ReloadCartridge,
        ReloadEnd,
        Max_None
};
/* using this gives errors somehow in FortWeapon.h on OnPlayReloadFX so we use enum class
UENUM(BlueprintType)
namespace EFortReloadFXState {
    enum Type {
        ReloadStart,
        ReloadCartridge,
        ReloadEnd,
        Max_None,
    };
}*/

