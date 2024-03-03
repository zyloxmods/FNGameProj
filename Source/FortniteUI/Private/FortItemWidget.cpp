#include "FortItemWidget.h"

void UFortItemWidget::SetOnGetItemToCompareDelegate(UFortItemWidget::FOnGetItemToCompare InDelegate) {
}

void UFortItemWidget::SetItem(const UFortItem* InItem, int32 NewQuantityOverride) {
}

void UFortItemWidget::SetCooldownMaterial(UMaterialInstanceDynamic* NewCooldownMaterial) {
}

void UFortItemWidget::OnFortItemUpdated(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged) {
}

void UFortItemWidget::OnFortItemDestroyed() {
}

bool UFortItemWidget::IsSlotted() const {
    return false;
}

bool UFortItemWidget::IsSchematic() const {
    return false;
}

bool UFortItemWidget::IsItemValid() const {
    return false;
}

bool UFortItemWidget::IsInventoryOverflowItem() const {
    return false;
}

bool UFortItemWidget::IsEquipped() const {
    return false;
}

bool UFortItemWidget::HasTertiaryCategory() const {
    return false;
}

bool UFortItemWidget::HasSecondaryCategory() const {
    return false;
}

bool UFortItemWidget::HasLevel() const {
    return false;
}

bool UFortItemWidget::HasDurability() const {
    return false;
}

float UFortItemWidget::GetType() const {
    return 0.0f;
}

int32 UFortItemWidget::GetStackCount() const {
    return 0;
}

EFortRarity UFortItemWidget::GetRarity() const {
    return EFortRarity::Common;
}

int32 UFortItemWidget::GetLevel() const {
    return 0;
}

UFortItem* UFortItemWidget::GetItemToCompare() {
    return NULL;
}

UFortItem* UFortItemWidget::GetItem() const {
    return NULL;
}

UTexture* UFortItemWidget::GetIconTexture(TEnumAsByte<EFortBrushSize::Type> InBrushSize) const {
    return NULL;
}

float UFortItemWidget::GetDurability() const {
    return 0.0f;
}

FText UFortItemWidget::GetDisplayName() const {
    return FText::GetEmpty();
}

FText UFortItemWidget::GetDescription() const {
    return FText::GetEmpty();
}





UFortItemWidget::UFortItemWidget() {
    this->CooldownMaterial = NULL;
    this->LastCooldownTimeInSeconds = 0;
    this->LastCooldownPct = 1;
    this->LastIsActivatable = false;
    this->QuantityOverride = 0;
}

