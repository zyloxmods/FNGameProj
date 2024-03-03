#pragma once
#include "CoreMinimal.h"
#include "EMashPhase.h"
#include "LTMWidgetBase.h"
#include "MashPhaseWidget.generated.h"

class AFortAthenaMutator_Mash;
class AFortPlayerControllerAthena;

UCLASS(Blueprintable, EditInlineNew)
class UMashPhaseWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMashPhase CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentObjectiveAreaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Mash* MashMutatorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerControllerAthena* CachedLocalPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CachedIsLocalPlayerAlive;
    
public:
    UMashPhaseWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseChanged(const EMashPhase NewPhase, const int32 CurrentObjectiveIndex, const int32 TotalObjectiveArea);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocalPlayerAlive();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownUpdate(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownStarted(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountdownFinished();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlayersLeftChanged(int32 InPlayersLeft);
    
    UFUNCTION(BlueprintCallable)
    void HandleMashPhaseChanged(int32 NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownUpdate();
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownStarted(const int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownFinished();
    
};

