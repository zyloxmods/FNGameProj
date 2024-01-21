#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortCharacterType.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortCharacterType : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortCharacterType();
};

