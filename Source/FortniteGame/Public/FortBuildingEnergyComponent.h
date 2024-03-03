#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "FortBuildingEnergyComponent.generated.h"

class UFortBuildingEnergyComponentAttrSet;
class UGameplayAbility;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBuildingEnergyComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_EnergyAttrSet, meta=(AllowPrivateAccess=true))
    UFortBuildingEnergyComponentAttrSet* EnergyComponentAttrSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> EnergyComponentRechargeAbility;
    
public:
    UFortBuildingEnergyComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateRegenRateAttr(float NewRegenRate);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnergyRechargeDelayAttr(float NewEnergyRechargeDelay);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnergyCostAttr(float NewEnergyCost);
    
    UFUNCTION(BlueprintCallable)
    void UpdateEnergyCapacityAttr(float NewEnergyCapacity);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentEnergyLevelAttr(float NewEnergyLevel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_EnergyAttrSet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCurrentEnergyAttributesChanged();
    
};

