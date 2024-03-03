#pragma once
#include "CoreMinimal.h"
#include "EHighlightFeatures.h"
#include "UnicornSocialMetaPayload.h"
#include "VictimGameplayInfoPayload.h"
#include "HighlightClipPayload.generated.h"

USTRUCT(BlueprintType)
struct FHighlightClipPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UCRN_HighlightId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UCRN_StartTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UCRN_Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHighlightFeatures, float> UCRN_GameplayFeatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UCRN_GameplayScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnicornSocialMetaPayload UCRN_SocialMeta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UCRN_NetworkingFidelityAverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> UCRN_POITags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVictimGameplayInfoPayload UCRN_FollowingPlayerKill_VictimGameplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVictimGameplayInfoPayload UCRN_FollowingPlayerDeath_VictimGameplayInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> UCRN_UnicornTags;
    
    FORTNITEGAME_API FHighlightClipPayload();
};

