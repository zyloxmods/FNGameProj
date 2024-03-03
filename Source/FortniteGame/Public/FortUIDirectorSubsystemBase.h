#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FortUIDirectorSubsystemBase.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortUIDirectorSubsystemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UFortUIDirectorSubsystemBase();
};

