#pragma once
#include "CoreMinimal.h"
#include "FortWeaponItemDefinition.h"
#include "FortEditToolItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortEditToolItemDefinition : public UFortWeaponItemDefinition {
    GENERATED_BODY()
public:
    UFortEditToolItemDefinition(const FObjectInitializer& ObjectInitializer);
};

