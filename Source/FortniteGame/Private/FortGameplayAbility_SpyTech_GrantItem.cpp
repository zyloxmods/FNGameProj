#include "FortGameplayAbility_SpyTech_GrantItem.h"

void UFortGameplayAbility_SpyTech_GrantItem::UpgradeTagApplied(const FGameplayTag InTag, int32 NewCount) {
}

void UFortGameplayAbility_SpyTech_GrantItem::LevelUpgradeTagApplied(const FGameplayTag InTag, int32 NewCount) {
}

UFortGameplayAbility_SpyTech_GrantItem::UFortGameplayAbility_SpyTech_GrantItem() {
    bSkipUpgradeCheck = false;
    bRechargeStackOnGrant = false;
    FortPlayerController = NULL;
    FortPlayerPawn = NULL;
    TextItemSource = TEXT("SpyTech_GrantItem");
}

