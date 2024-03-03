#pragma once
#include "CoreMinimal.h"
#include "FortBaseLayerAnimInstance.h"
#include "FortItemLayerAnimInstance_ChargedWeapon.generated.h"

class UAnimSequence;
class UCurveFloat;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFortItemLayerAnimInstance_ChargedWeapon : public UFortBaseLayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ChargeSpeedModifierCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* WeaponChargeLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChargeAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWeaponIsCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWeaponIsAtMaxCharge;
    
    UFortItemLayerAnimInstance_ChargedWeapon();
};

