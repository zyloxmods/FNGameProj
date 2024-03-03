#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortInitializationInterface.h"
#include "ThreatLocationInfo.h"
#include "FortThreatParticleActor.generated.h"

UCLASS(Blueprintable)
class AFortThreatParticleActor : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
    AFortThreatParticleActor();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThreatOverrideChanged(bool bForceThreatOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThreatCloudsChanged(const TArray<FThreatLocationInfo>& ThreatLocationInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FThreatLocationInfo> GetThreatClouds() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

