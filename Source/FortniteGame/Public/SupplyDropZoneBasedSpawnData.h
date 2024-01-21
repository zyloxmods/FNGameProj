#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "SupplyDropZoneBasedSpawnData.generated.h"

class AFortAthenaSupplyDrop;

USTRUCT(BlueprintType)
struct FSupplyDropZoneBasedSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortAthenaSupplyDrop*> SpawnedSupplyDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumDropsRemainingInWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextWaveSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase CurrGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrSubPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalSupplyDropsSpawnedInSubPhase;
    
    FORTNITEGAME_API FSupplyDropZoneBasedSpawnData();
};

