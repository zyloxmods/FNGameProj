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
    TeamAssignment = 255;
    PlayerIndex = 0;
    bIsInitialPlayer = false;
    bShouldLockProfile = false;
    bFailedToLockProfile = false;
    UnregistrationStatus = ERegisteredPlayerUnregistrationStatus::Registered;
    CommonPublicProfile = NULL;
    CommonCoreProfile = NULL;
    AccountProfile = NULL;
    WorldProfile = NULL;
    OutpostProfile = NULL;
    MetadataProfile = NULL;
    CreativeModeProfile = NULL;
    CollectionsProfile = NULL;
    AthenaProfile = NULL;
    QuestManagers[0] = NULL;
    QuestManagers[1] = NULL;
    CollectionBookManager = NULL;
    ExpeditionManager = NULL;
    LinkedAccountManager = NULL;
    TempAthenaMenuHeroInstance = NULL;
    bAthenaMenuHeroDirty = false;
    CustomizationAssetLoader = NULL;
}

