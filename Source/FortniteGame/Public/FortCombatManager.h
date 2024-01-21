#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CombatEventData.h"
#include "CombatFactorData.h"
#include "CombatThresholdData.h"
#include "EFortCombatEvents.h"
#include "EFortCombatThresholds.h"
#include "FortCombatManager.generated.h"

UCLASS(Blueprintable)
class AFortCombatManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_CombatEventHeat, meta=(AllowPrivateAccess=true))
    float ReplicatedCombatEventHeat[28];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatEventHeat[28];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatFactors[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentTotalHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaximumTotalHeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHeatEver;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventData Events[28];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFactorData Factors[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatThresholdData Thresholds[4];
    
public:
    AFortCombatManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThresholdChange(EFortCombatThresholds OldThreshold, EFortCombatThresholds NewThreshold);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CombatEventHeat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventHeatPercentTotal(EFortCombatEvents CombatEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventHeatPercent(EFortCombatEvents CombatEvent);
    
};

