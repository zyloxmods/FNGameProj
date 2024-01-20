#pragma once
#include "CoreMinimal.h"
#include "EFortMusicSectionType.generated.h"

UENUM(BlueprintType)
namespace EFortMusicSectionType {
    enum Type {
        Intro,
        Loop,
        Outro,
        Max_None,
    };
}

