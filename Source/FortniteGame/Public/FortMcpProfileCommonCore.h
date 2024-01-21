#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "ESocialImportPanelPlatform.h"
#include "FortMcpProfile.h"
#include "FortMcpProfileCommonCore.generated.h"

UCLASS(Blueprintable, Config=Game)
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
   /* UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void TwitchUpdateBroadcasterRegistration(const FString& AccessToken, const FString& ChannelId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetReceiveGiftsEnabled(bool bReceiveGifts, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetMtxPlatform(const FString& NewPlatform, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetMatchmakingBansViewed(UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void SetAffiliateName(const FString& AffiliateName, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RemoveGiftBox(const FString& GiftBoxItemId, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void RefundMtxPurchase(const FString& PurchaseId, bool QuickReturn, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void IssueFriendCode(const FString& CodeTokenType, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void CompletePlayerSurvey(const FString& SurveyID, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ClaimMfaEnabled(bool bClaimForStw, UPARAM(NotReplicated) FClientUrlContext& Context);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest=null, NetMulticast)
    void ClaimImportFriendsReward(ESocialImportPanelPlatform Network, UPARAM(NotReplicated) FClientUrlContext& Context);
    */
};

