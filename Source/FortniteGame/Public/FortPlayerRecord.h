#pragma once
#include "CoreMinimal.h"
#include "PlayerStatsRecord.h"
#include "StatManagerPeriodRecord.h"
#include "FortPlayerRecord.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> BackpackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerIsNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStatsRecord PlayerStatsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStatManagerPeriodRecord CampaignPeriodRecord;
    
    FORTNITEGAME_API FFortPlayerRecord();
};

