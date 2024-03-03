#pragma once
#include "CoreMinimal.h"
#include "SpawningInfo.generated.h"

class UFortAthenaMutator_SpawningPolicyData;

USTRUCT(BlueprintType)
struct FSpawningInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaMutator_SpawningPolicyData* ItemSpawnData;
    
    FORTNITEGAME_API FSpawningInfo();
};

