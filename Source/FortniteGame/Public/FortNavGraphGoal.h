#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortInitializationInterface.h"
#include "FortNavGraphGoal.generated.h"

UCLASS(Blueprintable)
class AFortNavGraphGoal : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GraphRadius;
    
public:
    AFortNavGraphGoal();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

