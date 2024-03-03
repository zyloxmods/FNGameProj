#pragma once
#include "CoreMinimal.h"
#include "TeamPlayerCountEntry.generated.h"

USTRUCT(BlueprintType)
struct FTeamPlayerCountEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;
    
    HYDROGENRUNTIME_API FTeamPlayerCountEntry();
};

