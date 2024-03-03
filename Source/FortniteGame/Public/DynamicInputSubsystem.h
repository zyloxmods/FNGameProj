#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DynamicInputSubsystem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UDynamicInputSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UDynamicInputSubsystem();
};

