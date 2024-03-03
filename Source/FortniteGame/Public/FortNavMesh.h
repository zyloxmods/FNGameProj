#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "FortNavMesh.generated.h"

class UFortAIHotSpotManager;

UCLASS(Blueprintable)
class AFortNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIHotSpotManager* HotSpotManager;
    
    AFortNavMesh();
};

