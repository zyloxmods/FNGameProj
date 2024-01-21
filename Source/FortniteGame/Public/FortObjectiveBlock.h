#pragma once
#include "CoreMinimal.h"
#include "FortObjectiveEntry.h"
#include "FortObjectiveBlock.generated.h"

USTRUCT(BlueprintType)
struct FFortObjectiveBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortObjectiveEntry> ObjectiveEntries;
    
    FORTNITEGAME_API FFortObjectiveBlock();
};

