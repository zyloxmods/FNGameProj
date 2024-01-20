#pragma once
#include "CoreMinimal.h"
#include "EChallengeScheduleUnlockType.h"
#include "FortChallengeBundleScheduleEntry.generated.h"

class UFortChallengeBundleItemDefinition;

USTRUCT(BlueprintType)
struct FFortChallengeBundleScheduleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortChallengeBundleItemDefinition> ChallengeBundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeScheduleUnlockType UnlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockValue;
    
    FORTNITEGAME_API FFortChallengeBundleScheduleEntry();
};

