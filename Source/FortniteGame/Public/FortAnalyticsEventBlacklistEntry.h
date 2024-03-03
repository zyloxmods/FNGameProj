#pragma once
#include "CoreMinimal.h"
#include "EFortAnalyticsEventBlacklistPlaylistKey.h"
#include "FortAnalyticsEventBlacklistEntry.generated.h"

USTRUCT(BlueprintType)
struct FFortAnalyticsEventBlacklistEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAnalyticsEventBlacklistPlaylistKey Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Probability;
    
    FORTNITEGAME_API FFortAnalyticsEventBlacklistEntry();
};

