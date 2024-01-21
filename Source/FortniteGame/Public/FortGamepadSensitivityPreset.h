#pragma once
#include "CoreMinimal.h"
#include "FortGamepadSensitivityPreset.generated.h"

USTRUCT(BlueprintType)
struct FFortGamepadSensitivityPreset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LookHorizontalSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LookVerticalSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LookHorizontalSpeedAds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LookVerticalSpeedAds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LookHorizontalBoostSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LookVerticalBoostSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LookHorizontalBoostSpeedAds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LookVerticalBoostSpeedAds;
    
    FORTNITEGAME_API FFortGamepadSensitivityPreset();
};

