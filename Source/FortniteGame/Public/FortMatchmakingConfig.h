#pragma once
#include "CoreMinimal.h"
#include "FortMatchmakingConfig.generated.h"

USTRUCT(BlueprintType)
struct FFortMatchmakingConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToHostOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToHostIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSearchResultsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxProcessedSearchResults;
    
    FORTNITEGAME_API FFortMatchmakingConfig();
};

