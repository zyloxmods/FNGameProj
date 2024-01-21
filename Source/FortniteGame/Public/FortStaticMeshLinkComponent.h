#pragma once
#include "CoreMinimal.h"
#include "NavRelevantComponent.h"
#include "FortStaticMeshLinkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortStaticMeshLinkComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UFortStaticMeshLinkComponent();
};

