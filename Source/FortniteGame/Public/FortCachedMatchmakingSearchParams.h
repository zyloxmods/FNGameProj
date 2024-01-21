#pragma once
#include "CoreMinimal.h"
#include "EFortMatchmakingType.h"
#include "MatchmakingParams.h"
#include "FortCachedMatchmakingSearchParams.generated.h"

USTRUCT(BlueprintType)
struct FFortCachedMatchmakingSearchParams {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMatchmakingType MatchmakingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchmakingParams MatchmakingParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
public:
    FORTNITEGAME_API FFortCachedMatchmakingSearchParams();
};

