#pragma once
#include "CoreMinimal.h"
#include "NavLinkCustomComponent.h"
#include "FortDoorLinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortDoorLinkComponent : public UNavLinkCustomComponent {
    GENERATED_BODY()
public:
    UFortDoorLinkComponent();
};

