#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortClientPilotActionBase.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortClientPilotActionBase : public UObject {
    GENERATED_BODY()
public:
    UFortClientPilotActionBase();
};

