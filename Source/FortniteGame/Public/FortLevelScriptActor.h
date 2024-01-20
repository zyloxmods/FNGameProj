#pragma once
#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "FortInitializationInterface.h"
#include "FortLevelScriptActor.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortLevelScriptActor : public ALevelScriptActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWorldReadyCalled: 1;
    
public:
    AFortLevelScriptActor();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldReady();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchStarted();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

