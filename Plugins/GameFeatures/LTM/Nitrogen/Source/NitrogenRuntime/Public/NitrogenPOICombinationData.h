#pragma once
#include "CoreMinimal.h"
#include "NitrogenFareDistanceValue.h"
#include "NitrogenPOIConnectionData.h"
#include "NitrogenPOICombinationData.generated.h"

USTRUCT(BlueprintType)
struct FNitrogenPOICombinationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenPOIConnectionData> POIConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNitrogenFareDistanceValue> FareDistanceValues;
    
    NITROGENRUNTIME_API FNitrogenPOICombinationData();
};

