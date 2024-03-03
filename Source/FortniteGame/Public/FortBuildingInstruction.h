#pragma once
#include "CoreMinimal.h"
#include "FortActorRecord.h"
#include "FortBuildingInstruction.generated.h"

USTRUCT(BlueprintType)
struct FFortBuildingInstruction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFortActorRecord ActorRecord;
    
    FORTNITEGAME_API FFortBuildingInstruction();
};

