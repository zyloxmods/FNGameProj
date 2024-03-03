#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaSpatialStyleCharacterData.h"
#include "AthenaSpatialStyleChallengeScreenData.generated.h"

class UFortChallengeBundleScheduleDefinition;

UCLASS(Blueprintable)
class UAthenaSpatialStyleChallengeScreenData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaSpatialStyleCharacterData> CharacterStyleChallenges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortChallengeBundleScheduleDefinition* CharacterStyleChallengesSchedule;
    
    UAthenaSpatialStyleChallengeScreenData();
};

