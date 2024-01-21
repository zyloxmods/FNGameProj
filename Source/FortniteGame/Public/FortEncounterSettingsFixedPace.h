#pragma once
#include "CoreMinimal.h"
#include "FortEncounterSettingsFixedPace.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterSettingsFixedPace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RiftSpawnInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 RiftSpawnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AIMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SpawnAIIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnAIIntervalCount;
    
    FORTNITEGAME_API FFortEncounterSettingsFixedPace();
};

