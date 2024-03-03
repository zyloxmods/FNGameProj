#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_SpaghettiVehicle.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_SpaghettiVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsUsingSpaghettiVehicle: 1;
    
    FORTNITEGAME_API FFortAnimInput_SpaghettiVehicle();
};

