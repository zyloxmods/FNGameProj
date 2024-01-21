#pragma once
#include "CoreMinimal.h"
#include "ETrackIncline.h"
#include "TrackConnectorMeshConfig.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FTrackConnectorMeshConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackIncline InclineSideA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackIncline InclineSideB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    FORTNITEGAME_API FTrackConnectorMeshConfig();
};

