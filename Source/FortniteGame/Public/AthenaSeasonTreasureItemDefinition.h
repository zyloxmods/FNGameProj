#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "AthenaSeasonTreasureItemDefinition.generated.h"

UCLASS(Blueprintable)
class UAthenaSeasonTreasureItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UAthenaSeasonTreasureItemDefinition(const FObjectInitializer& ObjectInitializer);
};

