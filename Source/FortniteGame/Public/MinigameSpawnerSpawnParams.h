#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MinigameSpawnerSpawnParams.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FMinigameSpawnerSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> PickupToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 PickupQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PickupInstigatorHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform SpawnTransform;
    
    FORTNITEGAME_API FMinigameSpawnerSpawnParams();
};

