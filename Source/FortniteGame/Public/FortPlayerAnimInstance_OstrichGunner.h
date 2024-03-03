#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_VelocityImpact.h"
#include "FortPlayerAnimInstance_OstrichOccupant.h"
#include "FortPlayerAnimInstance_OstrichGunner.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortPlayerAnimInstance_OstrichGunner : public UFortPlayerAnimInstance_OstrichOccupant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BodyRecoilAlphaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyRecoilAlphaWhenShotgunIsFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyRecoilAlphaNoShotgunFired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsMechShotgunFired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsMechBeginFired: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsRocketFiring: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_VelocityImpact GunnerVelocityImpactInput;
    
    UFortPlayerAnimInstance_OstrichGunner();
};

