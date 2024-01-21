#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAnimInput_VelocityImpact.h"
#include "FortPlayerAnimInstance.h"
#include "GolfCartHandOnWheelControl.h"
#include "FortPlayerAnimInstance_GolfCartDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortPlayerAnimInstance_GolfCartDriver : public UFortPlayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_VelocityImpact VelocityImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector ImpactDisplacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGolfCartHandOnWheelControl RightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGolfCartHandOnWheelControl LeftHand;
    
    UFortPlayerAnimInstance_GolfCartDriver();
};

