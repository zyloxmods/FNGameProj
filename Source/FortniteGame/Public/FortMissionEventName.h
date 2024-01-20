#pragma once
#include "CoreMinimal.h"
#include "FortEventName.h"
#include "FortMissionEventName.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMissionEventName : public FFortEventName {
    GENERATED_BODY()
public:
    FFortMissionEventName();
};

