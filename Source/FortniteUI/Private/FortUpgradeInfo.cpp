#include "FortUpgradeInfo.h"

bool UFortUpgradeInfo::IsUpgradeUnlocked() const {
    return false;
}

bool UFortUpgradeInfo::IsPreviewing() const {
    return false;
}

UMediaSource* UFortUpgradeInfo::GetVideo() const {
    return NULL;
}

int32 UFortUpgradeInfo::GetUpgradeUnlockLevel() const {
    return 0;
}

FText UFortUpgradeInfo::GetTitle() const {
    return FText::GetEmpty();
}

FText UFortUpgradeInfo::GetNextLevelTitle() const {
    return FText::GetEmpty();
}

FText UFortUpgradeInfo::GetNextLevelDescription() const {
    return FText::GetEmpty();
}

int32 UFortUpgradeInfo::GetNextLevel() const {
    return 0;
}

int32 UFortUpgradeInfo::GetMaxLevel() const {
    return 0;
}

FText UFortUpgradeInfo::GetItemName() const {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UFortUpgradeInfo::GetIcon(EUpgradeInfoImageSize ImageSize) const {
    return NULL;
}

bool UFortUpgradeInfo::GetDisplayAttributes(TArray<FFortDisplayAttribute>& OutDisplayAttributes) const {
    return false;
}

FText UFortUpgradeInfo::GetDescription() const {
    return FText::GetEmpty();
}

int32 UFortUpgradeInfo::GetCurrentLevel() const {
    return 0;
}

int32 UFortUpgradeInfo::GetCost() const {
    return 0;
}

void UFortUpgradeInfo::ForwardPreview() {
}

bool UFortUpgradeInfo::CanPreview() const {
    return false;
}

bool UFortUpgradeInfo::CanAffordUpgrade() const {
    return false;
}

void UFortUpgradeInfo::BackwardPreview() {
}

UFortUpgradeInfo::UFortUpgradeInfo() {
    this->NodeItemDef = NULL;
}

