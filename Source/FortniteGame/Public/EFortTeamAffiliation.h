#pragma once
#include "CoreMinimal.h"
#include "EFortTeamAffiliation.generated.h"

UENUM(BlueprintType)
namespace EFortTeamAffiliation {
    enum Type {
        Friendly,
        Neutral,
        Hostile,
    };
}

