#pragma once
#include "CoreMinimal.h"
#include "PlayerLoudoutEntry.h"
#include "RandomItemEntries.generated.h"

USTRUCT(BlueprintType)
struct FRandomItemEntries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerLoudoutEntry> WeightedEntries;
    
    FORTNITEGAME_API FRandomItemEntries();
};

