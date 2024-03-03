#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "BarrierObjectiveDisplayData.h"
#include "BuildingGameplayActor.h"
#include "EBarrierFoodTeam.h"
#include "EBarrierObjectiveDamageState.h"
#include "AthenaBarrierObjective.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class AAthenaBarrierObjective : public ABuildingGameplayActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarrierObjectiveDisplayData FoodDisplayData[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FoodTeam, meta=(AllowPrivateAccess=true))
    EBarrierFoodTeam FoodTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ObjectiveDamageState, meta=(AllowPrivateAccess=true))
    EBarrierObjectiveDamageState ObjectiveDamageState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HeadRotationYaw, meta=(AllowPrivateAccess=true))
    float HeadRotationYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAllowDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DamageFromSword;
    
public:
    AAthenaBarrierObjective();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateInGameHealth(float NewHealthPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeadMesh(UStaticMesh* NewMesh, FVector NewScale, FVector NewOffset, const TArray<UMaterialInterface*>& MaterialsToSwap);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ObjectiveDamageState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HeadRotationYaw();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FoodTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewDamageState(EBarrierObjectiveDamageState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeadRotationSet(float NewYaw);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGeneratorDestroyed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriendlyTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBarrierObjectiveDamageState GetObjectiveDamageState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBarrierFoodTeam GetFoodTeam() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyTimerGE(float TimerLength);
    
};

