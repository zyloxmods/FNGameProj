#pragma once
#include "CoreMinimal.h"
#include "ESubGame.h"
#include "ESubGameAccessStatus.h"
#include "ESubGameMatchmakingStatus.h"
#include "SubGameAccess.generated.h"

USTRUCT(BlueprintType)
struct FSubGameAccess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubGame SubGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubGameAccessStatus AccessStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubGameMatchmakingStatus MatchmakingStatus;
    
    FORTNITEGAME_API FSubGameAccess();
};

