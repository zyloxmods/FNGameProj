#pragma once
#include "CoreMinimal.h"
#include "WorldHLODStreamingData.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FWorldHLODStreamingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> MediumLevelHLODPackageNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> SplineHLODPackageNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MapsToRebuildHLODs;
    
    FWorldHLODStreamingData();
};

