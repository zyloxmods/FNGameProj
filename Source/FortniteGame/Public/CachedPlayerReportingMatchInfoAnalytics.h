#pragma once
#include "CoreMinimal.h"
#include "CachedPlayerReportingMatchInfoAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCachedPlayerReportingMatchInfoAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TournamentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventWindowId;
    
    FCachedPlayerReportingMatchInfoAnalytics();
};

