#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "GameStartCountdownBeginDelegate.h"
#include "GameStartCountdownEndDelegate.h"
#include "FortAthenaMutator_GameStartCountdown.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_GameStartCountdown : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStartCountdownBegin OnGameStartCountdownBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameStartCountdownEnd OnGameStartCountdownEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CountdownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StartingCountdownInteger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CountdownTimerRunning, meta=(AllowPrivateAccess=true))
    bool bCountdownTimerRunning;
    
public:
    AFortAthenaMutator_GameStartCountdown();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CountdownTimerRunning();
    
};

