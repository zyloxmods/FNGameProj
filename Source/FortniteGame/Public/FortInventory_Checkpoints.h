#pragma once
#include "CoreMinimal.h"
#include "FortInventory_CheckpointEntry.h"
#include "FortInventory_Checkpoints.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_Checkpoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortInventory_CheckpointEntry> Checkpoints;
    
    FORTNITEGAME_API FFortInventory_Checkpoints();
};

