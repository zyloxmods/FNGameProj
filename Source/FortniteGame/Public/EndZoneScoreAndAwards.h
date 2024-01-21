#pragma once
#include "CoreMinimal.h"
#include "FortQuestEarnedBadgeData.h"
#include "EndZoneScoreAndAwards.generated.h"

USTRUCT(BlueprintType)
struct FEndZoneScoreAndAwards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResultsPendingSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCriticalMatchBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestEarnedBadgeData> EarnedBadgeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EarnedItemCaches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMissionPoints;
    
    FORTNITEGAME_API FEndZoneScoreAndAwards();
};

