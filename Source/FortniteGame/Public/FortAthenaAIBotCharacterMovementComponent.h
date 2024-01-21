#pragma once
#include "CoreMinimal.h"
#include "FortMovementComp_CharacterAthena.h"
#include "FortAthenaAIBotCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaAIBotCharacterMovementComponent : public UFortMovementComp_CharacterAthena {
    GENERATED_BODY()
public:
    UFortAthenaAIBotCharacterMovementComponent();
};

