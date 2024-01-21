#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "FortNavLinkBlockerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortNavLinkBlockerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UFortNavLinkBlockerComponent();
};

