#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "FortBlueprintContext.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UFortBlueprintContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UFortBlueprintContext();
};

