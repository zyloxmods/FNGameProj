#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VehicleTrickSequenceBasics.generated.h"

USTRUCT(BlueprintType)
struct FVehicleTrickSequenceBasics : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickPointsPerAirSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickPointsPerAirDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrickPointsPerAirHeight;
    
    FORTNITEGAME_API FVehicleTrickSequenceBasics();
};

