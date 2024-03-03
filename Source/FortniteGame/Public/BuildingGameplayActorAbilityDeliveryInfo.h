#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BuildingGameplayActorAbilityDeliveryBucket.h"
#include "BuildingGameplayActorAbilityDeliveryInfo.generated.h"

class AActor;
class ABuildingGameplayActor;

USTRUCT(BlueprintType)
struct FBuildingGameplayActorAbilityDeliveryInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuildingGameplayActorAbilityDeliveryBucket> DeliveryBuckets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ProximityPulseInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ProximityPrePulseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasGEsToApplyOnTouch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasGEsToApplyOnExit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasGEsToApplyOnPulseTimer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasPersistentEffects: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingGameplayActor* OwningActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DeferredTouchActorsToProcess;
    
public:
    FORTNITEGAME_API FBuildingGameplayActorAbilityDeliveryInfo();
};

