#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFortActorSpawnerAuthority.h"
#include "FortActorSpawner.generated.h"

UCLASS(Blueprintable)
class AFortActorSpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortActorSpawnerAuthority SpawnerAuthority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnOnBeginPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyAfterSpawn: 1;
    
public:
    AFortActorSpawner();
    UFUNCTION(BlueprintCallable)
    bool TrySpawnActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActorSpawn(AActor* SpawnedActor);
    
};

