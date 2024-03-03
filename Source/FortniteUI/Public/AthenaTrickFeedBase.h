#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaTrickFeedBase.generated.h"

class UFortVehicleTrickSet;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaTrickFeedBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UAthenaTrickFeedBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTrickStats(const FText& StatsText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateScore(UFortVehicleTrickSet* TrickSet, int32 TotalScore);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMultiplier(int32 Multiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TrickSequenceStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TrickSequenceFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TrickSequenceComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TrickSequenceCanceled();
    
    UFUNCTION(BlueprintCallable)
    void RequestNextSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddTrick(const FText& TrickName);
    
};

