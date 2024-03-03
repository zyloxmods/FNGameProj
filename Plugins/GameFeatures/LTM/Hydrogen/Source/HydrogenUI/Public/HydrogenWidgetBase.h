#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "HydrogenWidgetBase.generated.h"

class AFortAthenaMutator_Hydrogen;
class AFortGameplayMutator;
class AHydrogenObjectiveActor;

UCLASS(Blueprintable, EditInlineNew)
class UHydrogenWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Hydrogen* CachedHydrogenMutator;
    
public:
    UHydrogenWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnMutatorAvailable(AFortGameplayMutator* MutatorActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MutatorReady(const AFortAthenaMutator_Hydrogen* MutatorActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortAthenaMutator_Hydrogen* GetHydrogenMutator() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCaptureProgressPercent(const AHydrogenObjectiveActor* InObjective) const;
    
};

