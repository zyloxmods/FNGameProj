#pragma once
#include "CoreMinimal.h"
#include "FortWinnerPlayerData.generated.h"

USTRUCT(BlueprintType)
struct FFortWinnerPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerID;
    
    FORTNITEGAME_API FFortWinnerPlayerData();
};

