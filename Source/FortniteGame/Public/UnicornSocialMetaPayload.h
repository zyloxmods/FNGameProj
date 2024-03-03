#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EUnicornSocialFeatures.h"
#include "UnicornSocialMetaPayload.generated.h"

USTRUCT(BlueprintType)
struct FUnicornSocialMetaPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EUnicornSocialFeatures, float> UCRN_FeatureScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FUniqueNetIdRepl> UCRN_FriendsInvolved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UCRN_SocialScore;
    
    FORTNITEGAME_API FUnicornSocialMetaPayload();
};

