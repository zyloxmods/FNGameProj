#pragma once
#include "CoreMinimal.h"
#include "FortSpawnActorData.generated.h"

class AActor;
class UFortSpawnActorInfo;

USTRUCT(BlueprintType)
struct FFortSpawnActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSpawnActorInfo* SpawnActorInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpawnsRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilNextSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedFortSpawnActors;
    
    FORTNITEGAME_API FFortSpawnActorData();
};

