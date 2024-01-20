#pragma once
#include "CoreMinimal.h"
#include "ChallengeGiftBoxData.h"
#include "EChallengeBundleQuestUnlockType.h"
#include "FortChallengeBundleQuestEntry.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortChallengeBundleQuestEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> QuestDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChallengeBundleQuestUnlockType QuestUnlockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeGiftBoxData RewardGiftBox;
    
    FFortChallengeBundleQuestEntry();
};

