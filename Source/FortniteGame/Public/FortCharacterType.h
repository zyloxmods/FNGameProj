#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortCharacterType.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortCharacterType : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortCharacterType(const FObjectInitializer& ObjectInitializer);
};

