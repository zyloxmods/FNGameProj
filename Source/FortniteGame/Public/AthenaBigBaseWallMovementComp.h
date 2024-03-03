#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AthenaBigBaseWallMovementComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAthenaBigBaseWallMovementComp : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UAthenaBigBaseWallMovementComp();
};

