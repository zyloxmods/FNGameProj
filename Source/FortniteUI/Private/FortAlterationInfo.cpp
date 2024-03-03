#include "FortAlterationInfo.h"

bool UFortAlterationInfo::IsFreeAlterationChoice() const {
    return false;
}

bool UFortAlterationInfo::IsAlterationUnlocked() const {
    return false;
}

bool UFortAlterationInfo::IsAlterationHighlighted() const {
    return false;
}

int32 UFortAlterationInfo::GetSlotIndex() const {
    return 0;
}

int32 UFortAlterationInfo::GetRequiredLevel() const {
    return 0;
}

EFortRarity UFortAlterationInfo::GetRarity() const {
    return EFortRarity::Common;
}

float UFortAlterationInfo::GetCurrentPipCount(float MaxPips) const {
    return 0.0f;
}

UFortItem* UFortAlterationInfo::GetCorrespondingItem() const {
    return NULL;
}

UFortAlterationItemDefinition* UFortAlterationInfo::GetAlterationDefintion() const {
    return NULL;
}

UFortAlterationInfo::UFortAlterationInfo() {
    this->CorrespondingItem = NULL;
    this->SlotIndex = 0;
    this->AlterationDef = NULL;
    this->RequiredMinLevel = 0;
    this->bIsUpgrade = false;
    this->CurrentItemLevel = 0;
    this->bFreeAlterationSlot = false;
    this->bUnlockedByEvolution = false;
    this->UpgradeLevelDelta = 0;
}

