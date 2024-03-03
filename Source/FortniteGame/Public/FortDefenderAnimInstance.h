#pragma once
#include "CoreMinimal.h"
#include "EFortCustomGender.h"
#include "FortAIAnimInstance.h"
#include "FortDefenderAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortDefenderAnimInstance : public UFortAIAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCustomGender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldWalkRightFootForward: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsChargingWeapon: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedAdjustedPlayrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuthoredJogSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AuthoredWalkSpeed;
    
public:
    UFortDefenderAnimInstance();
};

