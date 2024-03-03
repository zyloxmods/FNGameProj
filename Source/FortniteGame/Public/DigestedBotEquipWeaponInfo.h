#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "DigestedBotEquipWeaponInfo.generated.h"

USTRUCT(BlueprintType)
struct FDigestedBotEquipWeaponInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScalableFloat DistanceEffectivenessWithThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FScalableFloat DistanceEffectivenessNoThreat;
    
public:
    FORTNITEGAME_API FDigestedBotEquipWeaponInfo();
};

