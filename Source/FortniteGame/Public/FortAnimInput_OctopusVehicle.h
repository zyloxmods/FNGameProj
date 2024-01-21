#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_OctopusVehicle.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_OctopusVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsUsingOctopusVehicle: 1;
    
    FORTNITEGAME_API FFortAnimInput_OctopusVehicle();
};

