#pragma once
#include "CoreMinimal.h"
#include "SpawnGroupProgression.generated.h"

class UFortAISpawnGroup;

USTRUCT(BlueprintType)
struct FSpawnGroupProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAISpawnGroup* SpawnGroup;
    
    FORTNITEGAME_API FSpawnGroupProgression();
};

