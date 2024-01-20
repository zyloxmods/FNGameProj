#pragma once
#include "CoreMinimal.h"
#include "EFortScriptedActionEnvironment.generated.h"

UENUM(BlueprintType)
enum class EFortScriptedActionEnvironment : uint8 {
    FrontEnd,
    GameServer,
    GameClient,
    Max_None,
};

