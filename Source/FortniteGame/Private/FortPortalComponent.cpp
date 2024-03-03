#include "FortPortalComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPortalComponent::ServerSetLinkCode_Complete(bool bSuccess, const FString& ErrorMessage, const FCreativeLoadedLinkData& InLinkData) {
}

void UFortPortalComponent::ServerSetLinkCode(const FString& InLinkCode) {
}

void UFortPortalComponent::OnRep_LoadedLinkData() {
}

void UFortPortalComponent::OnRep_LinkDataErrorStatus() {
}

void UFortPortalComponent::OnRep_LinkCodeLockStatus() {
}

void UFortPortalComponent::OnMinigameStarted() {
}

void UFortPortalComponent::OnLinkThumbnailDownloaded(bool bSuccess, UTexture2DDynamic* InThumbnailTexture) {
}

void UFortPortalComponent::OnLinkCodeLockExpired() {
}

bool UFortPortalComponent::IsPartyEligibleForMatchmaking() const {
    return false;
}

bool UFortPortalComponent::HasValidLinkData() const {
    return false;
}

FTimespan UFortPortalComponent::GetRemainingLockDuration() const {
    return FTimespan{};
}

bool UFortPortalComponent::CanSetLinkCode() const {
    return false;
}

void UFortPortalComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPortalComponent, LoadedLinkData);
    DOREPLIFETIME(UFortPortalComponent, LinkDataErrorStatus);
    DOREPLIFETIME(UFortPortalComponent, LinkCodeLockMode);
    DOREPLIFETIME(UFortPortalComponent, LinkCodeLockStatus);
    DOREPLIFETIME(UFortPortalComponent, bHasValidLinkData);
    DOREPLIFETIME(UFortPortalComponent, LinkCodeLockExpirationTime);
}

UFortPortalComponent::UFortPortalComponent() {
    this->ThumbnailTexture = NULL;
    this->ThumbnailTextureWidth = 0;
    this->ThumbnailTextureHeight = 0;
    this->LinkCodeLockMode = EPortalLinkCodeLockMode::NeverLocked;
    this->LinkCodeLockStatus = EPortalLinkCodeLockStatus::Unlocked_NotSet;
    this->bHasValidLinkData = false;
}

