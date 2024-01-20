#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortSpawnContext.generated.h"

USTRUCT(BlueprintType)
struct FFortSpawnContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    FORTNITEGAME_API FFortSpawnContext();
};

