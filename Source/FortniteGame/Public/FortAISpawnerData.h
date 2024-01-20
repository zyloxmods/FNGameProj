#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSpawnAIRequest.h"
#include "FortAISpawnerData.generated.h"

USTRUCT(BlueprintType)
struct FFortAISpawnerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SpawnGroupInstanceGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSpawnAIRequest ReservedSpawnRequest;
    
    FORTNITEGAME_API FFortAISpawnerData();
};

