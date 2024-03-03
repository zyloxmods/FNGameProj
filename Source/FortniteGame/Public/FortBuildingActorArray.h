#pragma once
#include "CoreMinimal.h"
#include "FortDestroyedActorRecord.h"
#include "FortBuildingActorArray.generated.h"

USTRUCT(BlueprintType)
struct FFortBuildingActorArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDestroyedActorRecord> ActorRecords;
    
    FORTNITEGAME_API FFortBuildingActorArray();
};

