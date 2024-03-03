#pragma once
#include "CoreMinimal.h"
#include "DigestedRangedWeaponSkill.generated.h"

USTRUCT(BlueprintType)
struct FDigestedRangedWeaponSkill {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayBetweenShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayDeviationTimeBetweenShots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TriggerHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TriggerHoldDeviationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DelayBeforeFirstShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ShotDelayAfterTargeting;
    
public:
    FORTNITEGAME_API FDigestedRangedWeaponSkill();
};

