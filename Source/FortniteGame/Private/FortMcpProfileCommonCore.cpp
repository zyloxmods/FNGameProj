#include "FortMcpProfileCommonCore.h"
/*
void UFortMcpProfileCommonCore::TwitchUpdateBroadcasterRegistration_Implementation(const FString& AccessToken, const FString& ChannelId, FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::SetReceiveGiftsEnabled_Implementation(bool bReceiveGifts, FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::SetMtxPlatform_Implementation(const FString& NewPlatform, FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::SetMatchmakingBansViewed_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::SetIntroGamePlayed_Implementation(FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::SetAffiliateName_Implementation(const FString& AffiliateName, FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::RefundMtxPurchase_Implementation(const FString& PurchaseId, bool QuickReturn, const FString& GameContext, FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::IssueFriendCode_Implementation(const FString& CodeTokenType, FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::CompletePlayerSurvey_Implementation(const FString& SurveyID, FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::ClaimMfaEnabled_Implementation(bool bClaimForStw, FClientUrlContext& Context) {
}

void UFortMcpProfileCommonCore::ClaimImportFriendsReward_Implementation(ESocialImportPanelPlatform Network, FClientUrlContext& Context) {
}
*/
UFortMcpProfileCommonCore::UFortMcpProfileCommonCore() {
    ListCatalogEntriesUrl = TEXT("/api/storefront/v2/catalog");
    AffiliateExpirationSeconds = 0;
}

