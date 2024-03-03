#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_AimScrambleDataHelper.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_AimScrambleDataHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float AimYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsAimDataScambled: 1;
    
    FORTNITEGAME_API FFortAnimInput_AimScrambleDataHelper();
};

