#pragma once
#include "CoreMinimal.h"
#include "EMashPhase.h"
#include "LTMWidgetBase.h"
#include "MashPhaseWidget.generated.h"

class AFortAthenaMutator_Mash;

UCLASS(Blueprintable, EditInlineNew)
class UMashPhaseWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMashPhase::Type> CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentObjectiveAreaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Mash* MashMutatorRef;
    
public:
    UMashPhaseWidget();
protected:
    //UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    //void OnPhaseChanged(const EMashPhase NewPhase, const int32 CurrentObjectiveIndex, const int32 TotalObjectiveArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownUpdate(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownStarted(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleMashPhaseChanged(int32 NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownUpdate();
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownStarted(const int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownFinished();
    
};

