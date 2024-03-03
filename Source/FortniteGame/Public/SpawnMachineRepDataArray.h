#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SpawnMachineRepData.h"
#include "SpawnMachineRepDataArray.generated.h"

class AFortGameStateAthena;

USTRUCT(BlueprintType)
struct FSpawnMachineRepDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnMachineRepData> SpawnMachineRepDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* OwningGameState;
    
public:
    FORTNITEGAME_API FSpawnMachineRepDataArray();
};

