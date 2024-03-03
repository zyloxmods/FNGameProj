#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortInitializationInterface.h"
#include "Templates/SubclassOf.h"
#include "FortBallSpawner.generated.h"

class ABuildingGameplayActor;
class USphereComponent;

UCLASS(Blueprintable)
class AFortBallSpawner : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingGameplayActor> BallToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComp;
    
    AFortBallSpawner();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

