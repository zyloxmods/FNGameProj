#pragma once
#include "CoreMinimal.h"
#include "EBuildingGameplayActorAircraftSpawnSide.h"
#include "BuildingGameplayActorSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FBuildingGameplayActorSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BGAIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSpawnedBGAs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBGAsToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NextSpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildingGameplayActorAircraftSpawnSide LastSpawnSide;
    
    FORTNITEGAME_API FBuildingGameplayActorSpawnData();
};

