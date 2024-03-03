#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "SafeZoneStateBasedActorSpawnerData.h"
#include "FortAthenaMutator_SafeZoneStateBasedActorSpawner.generated.h"

class AActor;
class USafeZoneStateBasedActorSpawner;

UCLASS(Blueprintable)
class AFortAthenaMutator_SafeZoneStateBasedActorSpawner : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSafeZoneStateBasedActorSpawnerData> ActorSpawningDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USafeZoneStateBasedActorSpawner*> ActorSpawners;
    
public:
    AFortAthenaMutator_SafeZoneStateBasedActorSpawner();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorSpawned(AActor* SpawnedActor, const FSafeZoneStateBasedActorSpawnerData& SafeZoneStateBasedActorSpawnerData);
    
};

