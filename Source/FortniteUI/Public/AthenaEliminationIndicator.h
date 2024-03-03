#pragma once
#include "CoreMinimal.h"
#include "AthenaMarkedActorIndicator.h"
#include "AthenaEliminationIndicator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEliminationIndicator : public UAthenaMarkedActorIndicator {
    GENERATED_BODY()
public:
    UAthenaEliminationIndicator();
};

