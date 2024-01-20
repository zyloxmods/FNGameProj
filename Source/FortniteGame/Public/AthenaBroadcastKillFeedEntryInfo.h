#pragma once
#include "CoreMinimal.h"
#include "EAthenaBroadcastKillFeedEntryType.h"
#include "AthenaBroadcastKillFeedEntryInfo.generated.h"

USTRUCT(BlueprintType)
struct FAthenaBroadcastKillFeedEntryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InstigatorPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText VictimPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DistanceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaBroadcastKillFeedEntryType EntryType;
    
    FORTNITEGAME_API FAthenaBroadcastKillFeedEntryInfo();
};

