#pragma once
#include "CoreMinimal.h"
#include "NitrogenVehicle.generated.h"

class AFortAthenaVehicle;

USTRUCT(BlueprintType)
struct FNitrogenVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float PlayerlessStartServerTime;
    
    NITROGENRUNTIME_API FNitrogenVehicle();
};

