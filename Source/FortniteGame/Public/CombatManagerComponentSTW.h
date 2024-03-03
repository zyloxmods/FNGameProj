#pragma once
#include "CoreMinimal.h"
#include "CombatEventData.h"
#include "CombatFactorData.h"
#include "CombatThresholdData.h"
#include "EFortCombatEvents.h"
#include "FortCombatManagerEvent.h"
#include "FortControllerComponent.h"
#include "CombatManagerComponentSTW.generated.h"

class UReporterGraph;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UCombatManagerComponentSTW : public UFortControllerComponent {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReporterGraph* CombatGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReporterGraph* FactorGraph;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatEventData Events[28];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFactorData Factors[12];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatThresholdData Thresholds[4];
    
public:
    UCombatManagerComponentSTW();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTriggerCombatEventBatch(const TArray<FFortCombatManagerEvent>& Payload);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTriggerCombatEvent(EFortCombatEvents TriggeredEvent, float HeatMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CombatEventHeat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventHeatPercentTotal(EFortCombatEvents CombatEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEventHeatPercent(EFortCombatEvents CombatEvent);
    
};

