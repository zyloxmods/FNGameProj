#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortInitializationInterface.h"
#include "OnMissionUIEventDelegate.h"
#include "OnUpdateUIDelegate.h"
#include "FortMissionState.generated.h"

UCLASS(Abstract, Blueprintable)
class AFortMissionState : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateUI OnUpdateUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionUIEvent OnMissionUIEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlreadySetTimerOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAlreadyCalledOnAllPlayersLoadedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimerForOnAllPlayersLoadedIn;
    
public:
    AFortMissionState();
    UFUNCTION(BlueprintCallable)
    void UpdateUI();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTimerForOnAllPlayersLoadedIn(float Timer);
    
public:
    UFUNCTION(BlueprintCallable)
    void SendMissionUIEvent(const FGameplayTagContainer& EventTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldReady();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnAllPlayersLoadedInWrapper();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnAllPlayersLoadedIn();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

