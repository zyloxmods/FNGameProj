#pragma once
#include "CoreMinimal.h"
#include "NitrogenVehicleBoostFXVariable.generated.h"

USTRUCT(BlueprintType)
struct FNitrogenVehicleBoostFXVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    NITROGENRUNTIME_API FNitrogenVehicleBoostFXVariable();
};

