#pragma once
#include "CoreMinimal.h"
#include "FortPathFollowingComponent.h"
#include "AthenaPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAthenaPathFollowingComponent : public UFortPathFollowingComponent {
    GENERATED_BODY()
public:
    UAthenaPathFollowingComponent();
};

