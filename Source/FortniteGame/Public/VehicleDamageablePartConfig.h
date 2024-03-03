#pragma once
#include "CoreMinimal.h"
#include "VehicleDamageablePartConfig.generated.h"

USTRUCT(BlueprintType)
struct FVehicleDamageablePartConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShapeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    FORTNITEGAME_API FVehicleDamageablePartConfig();
};

