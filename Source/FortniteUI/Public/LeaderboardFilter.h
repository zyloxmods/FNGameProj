#pragma once
#include "CoreMinimal.h"
#include "PlaylistFilter.h"
#include "LeaderboardFilter.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboardFilter : public FPlaylistFilter {
    GENERATED_BODY()
public:
    FORTNITEUI_API FLeaderboardFilter();
};

