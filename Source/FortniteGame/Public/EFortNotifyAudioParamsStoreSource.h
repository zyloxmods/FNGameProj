#pragma once
#include "CoreMinimal.h"
#include "EFortNotifyAudioParamsStoreSource.generated.h"

UENUM(BlueprintType)
enum class EFortNotifyAudioParamsStoreSource : uint8 {
    Weapon,
    Pawn,
    Controller,
};

