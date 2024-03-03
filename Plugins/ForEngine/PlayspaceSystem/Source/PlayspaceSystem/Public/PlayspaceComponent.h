#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "PlayspaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UPlayspaceComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UPlayspaceComponent();
};

