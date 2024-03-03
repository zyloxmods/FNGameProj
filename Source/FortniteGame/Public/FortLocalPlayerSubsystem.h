#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "FortLocalPlayerSubsystem.generated.h"

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UFortLocalPlayerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    UFortLocalPlayerSubsystem();
};

