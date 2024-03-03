#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_Skydiving.h"
#include "FortBaseAnimInstance.h"
#include "FortGliderAnimInstance.generated.h"

class AFortPlayerParachute;
class AFortPlayerPawn;

UCLASS(Blueprintable, NonTransient)
class UFortGliderAnimInstance : public UFortBaseAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DeltaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerParachute* OwnerGlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* OwnerFortPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_Skydiving SkydivingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAccelerating2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOpen_SkipInto;
    
public:
    UFortGliderAnimInstance();
    UFUNCTION(BlueprintCallable)
    void SetGliderFullyDeployed(bool bIsFullyDeployed);
    
};

