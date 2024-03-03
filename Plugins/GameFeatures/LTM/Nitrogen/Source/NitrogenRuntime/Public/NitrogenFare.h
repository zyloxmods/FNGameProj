#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "EFareGenerationMethod.h"
#include "NitrogenBonusStats.h"
#include "Templates/SubclassOf.h"
#include "NitrogenFare.generated.h"

class AAthenaTraversePoint;
class AFortAthenaVehicle;
class AFortDagwoodVehicle;
class AFortPlayerControllerAthena;
class AFortPlayerPawnAthena;
class AFortPlayerStateAthena;
class ANitrogenTraversePoint;
class UFortAthenaAISpawnerData;
class UNitrogenPassengerPawnComponent;

UCLASS(Blueprintable)
class ANitrogenFare : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* Passenger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ANitrogenTraversePoint* PickUpPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ANitrogenTraversePoint* DropOffPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector DropOffPointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNitrogenBonusStats BonusStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FastDeliveryKmph;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> PassengerSpawnerDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNitrogenPassengerPawnComponent> NitrogenPassengerPawnComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PassengerSeatIndex;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PassengerSpawnRetryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 RewardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float FastDeliveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FastDeliveryBonusPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FastDeliveryMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistanceThresholdIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PickupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DropoffTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFareGenerationMethod FareGenerationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bDisablePassengerCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* AssignedPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PreviousPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PassengerPickedUp, meta=(AllowPrivateAccess=true))
    bool bPassengerPickedUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AFortPlayerStateAthena*, FTimerHandle> PickupTimerHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DropOffTimerHandle;
    
public:
    ANitrogenFare();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void PickUpPointOverlapped(AAthenaTraversePoint* TraversePoint, AFortPlayerStateAthena* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PickUpPointExited(AAthenaTraversePoint* TraversePoint, AFortPlayerStateAthena* PlayerState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVehicleEndPlay(AActor* DestroyedVehicle, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleDriverChanged(const AFortPlayerControllerAthena* NewDriver, AFortAthenaVehicle* Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnVehicleDestroyed(AFortDagwoodVehicle* DestroyedVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PassengerPickedUp();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewardValue() const;
    
    UFUNCTION(BlueprintCallable)
    void DropOffPointOverlapped(AAthenaTraversePoint* TraversePoint, AFortPlayerStateAthena* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DropOffPointExited(AAthenaTraversePoint* TraversePoint, AFortPlayerStateAthena* PlayerState);
    
};

