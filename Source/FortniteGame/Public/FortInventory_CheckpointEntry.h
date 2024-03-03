#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortInventory_CheckpointEntry.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_CheckpointEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartDeviceActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime MostRecentUseTime;
    
    FORTNITEGAME_API FFortInventory_CheckpointEntry();
};

