#pragma once
#include "CoreMinimal.h"
#include "McpMatchResults.generated.h"

USTRUCT(BlueprintType)
struct FMcpMatchResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Kills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Deaths;
    
    FORTNITEGAME_API FMcpMatchResults();
};

