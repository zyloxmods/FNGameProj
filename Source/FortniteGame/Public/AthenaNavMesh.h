#pragma once
#include "CoreMinimal.h"
#include "FortNavMesh.h"
#include "AthenaNavMesh.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AAthenaNavMesh : public AFortNavMesh {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HotSpotPathfindingMaxSearchNodes;
    
public:
    AAthenaNavMesh();
};

