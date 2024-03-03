#pragma once
#include "CoreMinimal.h"
#include "EFortGamepadSensitivity.h"
#include "FortGamepadBasicOptions.generated.h"

USTRUCT(BlueprintType)
struct FFortGamepadBasicOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGamepadSensitivity LookSensitivityPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGamepadSensitivity LookSensitivityPresetAds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookBuildModeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookEditModeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAdvancedOptions;
    
    FORTNITEGAME_API FFortGamepadBasicOptions();
};

