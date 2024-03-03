#pragma once
#include "CoreMinimal.h"
#include "EIntelStateEnum.h"
#include "LTMWidgetBase.h"
#include "InfiltrationBaseWidget.generated.h"

class AFortAthenaMutator_Infiltration;

UCLASS(Blueprintable, EditInlineNew)
class UInfiltrationBaseWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaMutator_Infiltration> CachedMutator;
    
public:
    UInfiltrationBaseWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMutatorReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsCurrentlyDefendedChanged(bool bNewBeingDefended);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIntelStateChanged(EIntelStateEnum NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGroundTimerChanged(float NewTimeRemaining);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerDefending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayerAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingHeldByLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumOfRounds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsCurrentlyDefended() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGroundTimeRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetDefendingTeam() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRound() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIntelStateEnum GetCurrentIntelState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetAttackingTeam() const;
    
};

