#pragma once
#include "CoreMinimal.h"
#include "EDadBroHealthType.h"
#include "LTMWidgetBase.h"
#include "DadBroHealthWidget.generated.h"

class AFortAIPawn;
class AFortAthenaMutator_DadBro;

UCLASS(Blueprintable, EditInlineNew)
class UDadBroHealthWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_DadBro* DadBroMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BossHealthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAIPawn* BossAIPawn;
    
public:
    UDadBroHealthWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateFinalBossBattle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransitionToNewHealthState(EDadBroHealthType NewHealthType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewHealthPercent(float NewHealth);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMashPhaseChanged(int32 NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void HandleDadBroSpawned(AFortAIPawn* DadBroPawn);
    
};

