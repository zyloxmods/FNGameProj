#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortTournamentManager.generated.h"

UCLASS(Blueprintable, Within=FortGameInstance)
class FORTNITEGAME_API UFortTournamentManager : public UObject {
    GENERATED_BODY()
public:
    UFortTournamentManager();
};

