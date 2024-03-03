#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingType.h"
#include "VolumeActorStats.generated.h"

USTRUCT(BlueprintType)
struct FVolumeActorStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EFortBuildingType::Type>, int32> BuildingTypeCounts;
    
    FORTNITEGAME_API FVolumeActorStats();
};

