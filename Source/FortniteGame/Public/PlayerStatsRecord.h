#pragma once
#include "CoreMinimal.h"
#include "PlayerStatsRecord.generated.h"

USTRUCT(BlueprintType)
struct FPlayerStatsRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stats[35];
    
    FORTNITEGAME_API FPlayerStatsRecord();
};

