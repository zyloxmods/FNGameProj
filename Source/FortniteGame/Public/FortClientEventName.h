#pragma once
#include "CoreMinimal.h"
#include "FortEventName.h"
#include "FortClientEventName.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortClientEventName : public FFortEventName {
    GENERATED_BODY()
public:
    FFortClientEventName();
};

