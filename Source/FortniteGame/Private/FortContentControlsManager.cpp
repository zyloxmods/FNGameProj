#include "FortContentControlsManager.h"

void UFortContentControlsManager::SetVoiceChatSettings(ESelectableVoiceChatSetting InSetting) {
}

void UFortContentControlsManager::SetUserGeneratedContentViewable(const FString& InValue) {
}

void UFortContentControlsManager::SetPurchaseReportingEnabled(bool bInValue) {
}

void UFortContentControlsManager::SetPlaytimeReportingFrequency(const FString& InValue) {
}

void UFortContentControlsManager::SetCanVoiceChatWithUnknowns(bool bInValue) {
}

void UFortContentControlsManager::SetCanUseVoiceChat(bool bInValue) {
}

void UFortContentControlsManager::SetCanUseTextChat(bool bInValue) {
}

void UFortContentControlsManager::SetCanSeeThirdPartyNames(bool bInValue) {
}

void UFortContentControlsManager::SetCanSeeOtherPlayersNames(bool bInValue) {
}

void UFortContentControlsManager::SetCanSeeMatureLanguage(bool bInValue) {
}

void UFortContentControlsManager::SetCanReceiveInGameItems(bool bInValue) {
}

void UFortContentControlsManager::SetCanDisplayMyUserName(bool bInValue) {
}

void UFortContentControlsManager::SetCanAcceptFriendRequest(bool bInValue) {
}

void UFortContentControlsManager::SetAllowedToMakePurchases(bool bInValue) {
}

void UFortContentControlsManager::SetAllowedToAcquire(bool bInValue) {
}

ESelectableVoiceChatSetting UFortContentControlsManager::GetVoiceChatSettings() const {
    return ESelectableVoiceChatSetting::Off;
}

FString UFortContentControlsManager::GetUserGeneratedContentViewable() const {
    return TEXT("");
}

bool UFortContentControlsManager::GetPurchaseReportingEnabled() const {
    return false;
}

FString UFortContentControlsManager::GetPlaytimeReportingFrequency() const {
    return TEXT("");
}

bool UFortContentControlsManager::GetCanVoiceChatWithUnknowns() const {
    return false;
}

bool UFortContentControlsManager::GetCanUseVoiceChat() const {
    return false;
}

bool UFortContentControlsManager::GetCanUseTextChat() const {
    return false;
}

bool UFortContentControlsManager::GetCanSeeThirdPartyNames() const {
    return false;
}

bool UFortContentControlsManager::GetCanSeeOtherPlayersNames() const {
    return false;
}

bool UFortContentControlsManager::GetCanSeeMatureLanguage() const {
    return false;
}

bool UFortContentControlsManager::GetCanReceiveInGameItems() const {
    return false;
}

bool UFortContentControlsManager::GetCanDisplayMyUserName() const {
    return false;
}

bool UFortContentControlsManager::GetCanAcceptFriendRequest() const {
    return false;
}

bool UFortContentControlsManager::GetAllowedToMakePurchases() const {
    return false;
}

bool UFortContentControlsManager::GetAllowedToAcquire() const {
    return false;
}

UFortContentControlsManager::UFortContentControlsManager() {
    OwningPlayer = NULL;
}

