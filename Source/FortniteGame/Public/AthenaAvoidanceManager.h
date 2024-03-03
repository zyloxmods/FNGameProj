#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/AvoidanceManager.h"
#include "AthenaAvoidanceManager.generated.h"

UCLASS(Blueprintable)
class UAthenaAvoidanceManager : public UAvoidanceManager {
    GENERATED_BODY()
public:
    UAthenaAvoidanceManager();
};

