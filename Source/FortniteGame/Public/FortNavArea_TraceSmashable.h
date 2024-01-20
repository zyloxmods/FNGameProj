#pragma once
#include "CoreMinimal.h"
#include "FortNavArea_DefaultSmashable.h"
#include "FortNavArea_TraceSmashable.generated.h"

UCLASS(Blueprintable)
class UFortNavArea_TraceSmashable : public UFortNavArea_DefaultSmashable {
    GENERATED_BODY()
public:
    UFortNavArea_TraceSmashable();
};

