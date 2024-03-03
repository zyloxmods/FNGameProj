#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAbilitySetDeliveryInfo.h"
#include "FortAbilitySetHandle.h"
#include "ProximityBasedGEDeliveryInfoHard.h"
#include "BuildingGameplayActorAbilityDeliveryBucket.generated.h"

USTRUCT(BlueprintType)
struct FBuildingGameplayActorAbilityDeliveryBucket {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FProximityBasedGEDeliveryInfoHard> ProximityEffectBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetDeliveryInfo> PawnPersistentAbilitySetBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAbilitySetHandle> PersistentlyAppliedAbilitySets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabledByDefault: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasGEsToApplyOnTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasGEsToApplyOnExit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasGEsToApplyOnPulseTimer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasPersistentEffects: 1;
    
public:
    FORTNITEGAME_API FBuildingGameplayActorAbilityDeliveryBucket();
};

