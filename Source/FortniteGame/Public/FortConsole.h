#pragma once
#include "CoreMinimal.h"
#include "Engine/Console.h"
#include "FortConsole.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortConsole : public UConsole {
    GENERATED_BODY()
public:
    UFortConsole();
};

