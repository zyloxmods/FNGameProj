#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortNavLinkContainer.generated.h"

UCLASS(Blueprintable, NotPlaceable, Transient)
class AFortNavLinkContainer : public AActor {
    GENERATED_BODY()
public:
    AFortNavLinkContainer();
};

