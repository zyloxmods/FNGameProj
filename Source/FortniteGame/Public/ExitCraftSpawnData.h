#pragma once
#include "CoreMinimal.h"
#include "ExitCraftSpawnData.generated.h"

class UFortAthenaExitCraftInfo;

USTRUCT(BlueprintType)
struct FExitCraftSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaExitCraftInfo* ExitCraftInfo;
    
    FORTNITEGAME_API FExitCraftSpawnData();
};

