#pragma once
#include "CoreMinimal.h"
#include "AthenaTravelLogEntry.h"
#include "AthenaTravelRecord.generated.h"

USTRUCT(BlueprintType)
struct FAthenaTravelRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaTravelLogEntry> Log;
    
    FORTNITEGAME_API FAthenaTravelRecord();
};

