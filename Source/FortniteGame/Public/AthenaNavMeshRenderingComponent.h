#pragma once
#include "CoreMinimal.h"
#include "NavMesh/NavMeshRenderingComponent.h"
#include "AthenaNavMeshRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAthenaNavMeshRenderingComponent : public UNavMeshRenderingComponent {
    GENERATED_BODY()
public:
    UAthenaNavMeshRenderingComponent();
};

