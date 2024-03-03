#pragma once
#include "CoreMinimal.h"
#include "LimitedLifeByTeamData.generated.h"

USTRUCT(BlueprintType)
struct FLimitedLifeByTeamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTeamPooledLives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Lives;
    
    FORTNITEGAME_API FLimitedLifeByTeamData();
};

