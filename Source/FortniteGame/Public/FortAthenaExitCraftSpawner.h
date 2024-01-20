#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAthenaExitCraftSpawner.generated.h"

class ABuildingSMActor;
class UCapsuleComponent;
class UFortAthenaExitCraftInfo;

UCLASS(Blueprintable)
class AFortAthenaExitCraftSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DestructionOverlapCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaExitCraftInfo* ExitCraftInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingSMActor*> BuildingActorsToDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpawnerSpecialActorID;
    
public:
    AFortAthenaExitCraftSpawner();
protected:
    UFUNCTION(BlueprintCallable)
    void StartExitCraftSpawnTimer();
    
    UFUNCTION(BlueprintCallable)
    void DestroyBlockingActors();
    
};

