#pragma once
#include "CoreMinimal.h"
#include "FortStaticReplicatedActor.h"
#include "FortAthenaWater.generated.h"

UCLASS(Abstract, Blueprintable, Config=Game)
class AFortAthenaWater : public AFortStaticReplicatedActor {
    GENERATED_BODY()
public:
    AFortAthenaWater();
};

