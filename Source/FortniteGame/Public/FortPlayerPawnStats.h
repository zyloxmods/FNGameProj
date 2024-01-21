#pragma once
#include "CoreMinimal.h"
#include "FortPawnStats.h"
#include "FortPlayerPawnStats.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPlayerPawnStats : public FFortPawnStats {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxJumpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintingStaminaExpenditureRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersonalVehicleFallingDamageTableRow;
    
public:
    FFortPlayerPawnStats();
};

