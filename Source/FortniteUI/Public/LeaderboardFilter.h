#pragma once
#include "CoreMinimal.h"
#include "LeaderboardFilter.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FLeaderboardFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LeaderboardDisplayData;
    
    FORTNITEUI_API FLeaderboardFilter();
};

