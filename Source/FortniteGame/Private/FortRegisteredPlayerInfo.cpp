#include "FortRegisteredPlayerInfo.h"

void UFortRegisteredPlayerInfo::HandleDifferentHeroLoadoutActivated(const UFortMcpProfileCampaign* Profile) {
}

FString UFortRegisteredPlayerInfo::GetPlayerName() const {
    return TEXT("");
}

UAbilitySystemComponent* UFortRegisteredPlayerInfo::GetAbilitySystemComponent() const {
    return NULL;
}

UFortRegisteredPlayerInfo::UFortRegisteredPlayerInfo() {
    this->TeamAssignment = 255;
    this->PlayerIndex = 0;
    this->bIsInitialPlayer = false;
    this->bShouldLockProfile = false;
    this->bFailedToLockProfile = false;
    this->UnregistrationStatus = ERegisteredPlayerUnregistrationStatus::Registered;
    this->CommonPublicProfile = NULL;
    this->CommonCoreProfile = NULL;
    this->AccountProfile = NULL;
    this->WorldProfile = NULL;
    this->OutpostProfile = NULL;
    this->MetadataProfile = NULL;
    this->CreativeModeProfile = NULL;
    this->CollectionsProfile = NULL;
    this->AthenaProfile = NULL;
    this->QuestManagers[0] = NULL;
    this->QuestManagers[1] = NULL;
    this->CollectionBookManager = NULL;
    this->ExpeditionManager = NULL;
    this->LinkedAccountManager = NULL;
    this->TempAthenaMenuHeroInstance = NULL;
    this->bAthenaMenuHeroDirty = false;
    this->CustomizationAssetLoader = NULL;
}

