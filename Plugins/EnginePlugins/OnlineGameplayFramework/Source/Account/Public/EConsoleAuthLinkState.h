#pragma once
#include "CoreMinimal.h"
#include "EConsoleAuthLinkState.generated.h"

UENUM(BlueprintType)
enum class EConsoleAuthLinkState : uint8 {
    NotOnConsole,
    ConsoleNotLoggedIn,
    EpicNotLoggedIn,
    ThisEpicAccountLinked,
    OtherEpicAccountLinked,
    NoEpicAccountLinked,
    PrimaryIdNotLinked,
    SecondaryIdNotLinked,
};

