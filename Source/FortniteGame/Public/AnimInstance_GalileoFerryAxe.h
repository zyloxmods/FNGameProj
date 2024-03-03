#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GalileoFerryAxeDelegateDelegate.h"
#include "AnimInstance_GalileoFerryAxe.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAnimInstance_GalileoFerryAxe : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeFolding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VFXDisableTimeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShouldFoldBackWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDesiredIdleParticleVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGalileoFerryAxeDelegate FrontEndIdle;
    
    UAnimInstance_GalileoFerryAxe();
};

