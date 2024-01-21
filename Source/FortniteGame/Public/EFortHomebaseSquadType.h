#pragma once
#include "CoreMinimal.h"
#include "EFortHomebaseSquadType.generated.h"

UENUM(BlueprintType)
enum class EFortHomebaseSquadType : uint8 {
    AttributeSquad,
    CombatSquad,
    DefenderSquad,
    ExpeditionSquad,
    Max_None,
};

