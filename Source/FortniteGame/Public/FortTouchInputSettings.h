#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTouchAimAssistSettings.h"
#include "FortTouchInputSettings.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class UFortTouchInputSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LookSensitivityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LookVelocityScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortTouchAimAssistSettings TouchAimAssist;
    
    UFortTouchInputSettings();
};

