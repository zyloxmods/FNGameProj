#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_SpawnParamsBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_SpawnParams.generated.h"

class APawn;
class UFortAthenaAISpawnerData;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_SpawnParams : public UFortAthenaAISpawnerDataComponent_SpawnParamsBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> PawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaAISpawnerData>> SpawnerDataSpawnedAsChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTracePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCheckForOverlaps: 1;
    
public:
    UFortAthenaAISpawnerDataComponent_SpawnParams();
};

