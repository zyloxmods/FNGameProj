#pragma once
#include "CoreMinimal.h"
#include "FortVehicleAudioParam.h"
#include "FortVehicleAudioFloatParam.generated.h"

USTRUCT(BlueprintType)
struct FFortVehicleAudioFloatParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortVehicleAudioParam Data;
    
    FORTNITEGAME_API FFortVehicleAudioFloatParam();
};

