#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "UObject/NoExportTypes.h"
#include "Party/PartyMember.h"
#include "EFortPartyMemberLocation.h"
#include "EFortPartyMemberReadyCheckStatus.h"
#include "EGameReadiness.h"
#include "EPartyMemberVoiceChatStatus.h"
#include "PartyMemberAssistedChallengeInfo.h"
#include "PartyMemberAthenaBannerInfo.h"
#include "PartyMemberBattlePassInfo.h"
#include "PartyMemberCampaignHero.h"
#include "PartyMemberCosmeticLoadout.h"
#include "PartyMemberFrontendEmote.h"
#include "PartyMemberSquadAssignmentRequest.h"
#include "PartyMemberVariantCache.h"
#include "FortPartyMemberRepData.generated.h"

class UFortFeatItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPartyMemberRepData : public FPartyMemberRepData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPartyMemberLocation Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberCampaignHero CampaignHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchmakingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ZoneInstanceId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 HomeBaseVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPreloadedAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberFrontendEmote FrontendEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumAthenaPlayersLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpectateAPartyMemberAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime UtcTimeStartedMatchAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameReadiness GameReadiness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPartyMemberReadyCheckStatus InGameReadyCheckStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiddenMatchmakingDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType ReadyInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType CurrentInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberAssistedChallengeInfo AssistedChallengeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortFeatItemDefinition* FeatDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberSquadAssignmentRequest MemberSquadAssignmentRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyMemberVoiceChatStatus VoiceChatStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberCosmeticLoadout AthenaCosmeticLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberVariantCache AthenaCosmeticLoadoutVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ArbitraryCustomDataStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberAthenaBannerInfo AthenaBannerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPartyMemberBattlePassInfo BattlePassInfo;
    
public:
    FFortPartyMemberRepData();
};

