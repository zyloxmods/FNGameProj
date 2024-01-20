#pragma once
#include "CoreMinimal.h"
#include "FortStaticReplicatedActor.h"
#include "FortAthenaWater.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class FORTNITEGAME_API AFortAthenaWater : public AFortStaticReplicatedActor {
    GENERATED_BODY()
public:
    AFortAthenaWater();
};

