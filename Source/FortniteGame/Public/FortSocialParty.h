#pragma once
#include "CoreMinimal.h"
#include "Party/SocialParty.h"
#include "FortPartyRepData.h"
#include "FortPartySquad.h"
#include "GameDifficultyInfo.h"
#include "FortSocialParty.generated.h"

UCLASS(Blueprintable, NonTransient, Within=FortSocialManager)
class FORTNITEGAME_API UFortSocialParty : public USocialParty {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameDifficultyInfo CachedZoneDifficultyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPartyRepData PartyRepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPartySquad> PartySquads;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendSocialFriendsActiveAnalytics;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPromoteMemberWhenBackgrounding;
    
public:
    UFortSocialParty();
};

