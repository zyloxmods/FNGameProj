#pragma once
#include "CoreMinimal.h"
#include "McpMatchResults.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FMcpMatchResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Deaths;
    
    FMcpMatchResults();
};

