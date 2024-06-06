#pragma once
#include "CoreMinimal.h"
#include "AthenaCharacterPartItemDefinition.h"
#include "AthenaHatItemDefinition.generated.h"

UCLASS(Blueprintable)
class UAthenaHatItemDefinition : public UAthenaCharacterPartItemDefinition {
    GENERATED_BODY()
public:
    UAthenaHatItemDefinition(const FObjectInitializer& ObjectInitializer);
};

