#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayBehaviorsBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYBEHAVIORSMODULE_API UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameplayBehaviorsBlueprintFunctionLibrary();
};

