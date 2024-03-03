#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PhysicsVolume.h"
#include "WaterBodyExclusionVolume.generated.h"

class AWaterBody;

UCLASS(Blueprintable)
class WATER_API AWaterBodyExclusionVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreAllOverlappingWaterBodies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AWaterBody*> WaterBodiesToIgnore;
    
    AWaterBodyExclusionVolume();
};

