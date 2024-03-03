#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "MashBossBattleWidget.generated.h"

class AFortAIPawn;
class AFortAthenaMutator_Mash;

UCLASS(Blueprintable, EditInlineNew)
class UMashBossBattleWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Mash* MashMutatorRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentBossHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TotalBossHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BossHealthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAIPawn* BossAIPawn;
    
public:
    UMashBossBattleWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFinalBossBattle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalBossHealthUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalBossFightStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMashPhaseChanged(int32 NewPhase);
    
};

