#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "ESocialImportPanelPlatform.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCommonCore.generated.h"

UCLASS(Blueprintable, Config=Engine)
class FORTNITEGAME_API UFortMcpProfileCommonCore : public UFortMcpProfile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ListCatalogEntriesUrl;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AffiliateExpirationSeconds;
    
public:
    UFortMcpProfileCommonCore();
  /*  UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void TwitchUpdateBroadcasterRegistration(const FString& AccessToken, const FString& ChannelId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetReceiveGiftsEnabled(bool bReceiveGifts, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetMtxPlatform(const FString& NewPlatform, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetMatchmakingBansViewed(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetIntroGamePlayed(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void SetAffiliateName(const FString& AffiliateName, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void RefundMtxPurchase(const FString& PurchaseId, bool QuickReturn, const FString& GameContext, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void IssueFriendCode(const FString& CodeTokenType, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void CompletePlayerSurvey(const FString& SurveyID, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ClaimMfaEnabled(bool bClaimForStw, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void ClaimImportFriendsReward(ESocialImportPanelPlatform Network, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
};

