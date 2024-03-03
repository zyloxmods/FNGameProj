#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "WaxProgressWidgetBase.generated.h"

class AFortAthenaMutator_Wax;

UCLASS(Blueprintable, EditInlineNew)
class UWaxProgressWidgetBase : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Wax* WaxMutator;
    
public:
    UWaxProgressWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPlayerCloseToVictory(int32 CoinsAwayFromVictory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowEnemyCloseToVictory(int32 CoinsAwayFromVictory);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPendingFlashes(const TArray<int32>& Flashes);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyTokenChange();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAnyTokenChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideCloseToVictoryIfShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoCoinPulseFor(int32 BarIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AdjustForSpectate(bool bIsSpectating);
    
};

