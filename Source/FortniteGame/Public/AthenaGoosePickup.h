#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "BuildingGameplayActor.h"
#include "EGoosePickupState.h"
#include "GooseDisplayData.h"
#include "GooseWeaponTierData.h"
#include "Templates/SubclassOf.h"
#include "AthenaGoosePickup.generated.h"

class AActor;
class UGameplayEffect;
class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class AAthenaGoosePickup : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PickupState, meta=(AllowPrivateAccess=true))
    EGoosePickupState PickupState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bIsDespawning, meta=(AllowPrivateAccess=true))
    bool bIsDespawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DeployedLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DespawnWarningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat InStormLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DropGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DisplayIndex, meta=(AllowPrivateAccess=true))
    int32 DisplayIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UGameplayEffect>> Loot_To_Health_GE_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UGameplayEffect>> Loot_To_Boost_GE_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UGameplayEffect>> Loot_To_Passengers_GE_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<UGameplayEffect>> Loot_to_Driver_GE_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGooseWeaponTierData> WeaponTierData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForcedLootTableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGooseDisplayData> DisplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DeployHeight;
    
public:
    AAthenaGoosePickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStaticMesh(UStaticMesh* NewStaticMesh, const TArray<UMaterialInterface*>& MaterialsToSwap, int32 InDisplayIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartDespawnWarning_Client();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DisplayIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsDespawning();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnImpactedByPlane_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnImpactedByPlane_Client();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFalling_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFalling_Client();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeployed_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeployed_Client();
    
    UFUNCTION(BlueprintCallable)
    void OnCollide(AActor* CollidingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeployTimerUp_Server();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DeployTimerUp_Client();
    
};

