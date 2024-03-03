#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "EntityActorSubsystem.generated.h"

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UEntityActorSubsystem();
};

