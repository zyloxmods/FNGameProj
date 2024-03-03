#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAbilitySystemInterface.h"
#include "OnSafeZoneInStormStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortMissionStormSafeZone.generated.h"

class ABuildingActor;
class AFortPlayerPawn;
class UAbilitySystemComponent;
class UFortGameplayAbility;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AFortMissionStormSafeZone : public AActor/*, public IFortAbilitySystemInterface*/ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SafeZoneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleUniformly;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSafeZoneInStormStateChanged OnSafeZoneInStormStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortGameplayAbility>> Abilities;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SafeZoneInStormStateChanged, meta=(AllowPrivateAccess=true))
    bool bSafeZoneInStormStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ZoneRadius, meta=(AllowPrivateAccess=true))
    float SafeZoneRadius;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilityComponent;
    
public:
    AFortMissionStormSafeZone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSafeZoneRadius(const float InRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSafeZoneRadiusChanged(const float NewRadius, const float NewConvertedRadius);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ZoneRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SafeZoneInStormStateChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerPlacedBuildingActorInRadius(const ABuildingActor* BuildingPlaced, const AFortPlayerPawn* ByPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSafeZoneRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetConvertedSafeZoneRadius() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

