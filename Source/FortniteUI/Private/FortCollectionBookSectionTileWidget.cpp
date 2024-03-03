#include "FortCollectionBookSectionTileWidget.h"

void UFortCollectionBookSectionTileWidget::OnSectionSlotUpdate_Implementation(int32 NumFilledSlots, int32 NumSlots, EFortCollectionBookState SectionState) {
}

void UFortCollectionBookSectionTileWidget::OnItemUnslotted(const UFortAccountItem* ItemUnslotted, const UFortAccountItem* OldSlottedItem, FName SlotId) {
}

void UFortCollectionBookSectionTileWidget::OnItemSlotted(const UFortAccountItem* ItemSlotted, FName SlotId) {
}

UFortCollectionBookSectionTileWidget::UFortCollectionBookSectionTileWidget() {
    this->SlotWidgetHorizontalAlignment = HAlign_Fill;
    this->SlotWidgetVerticalAlignment = VAlign_Fill;
    this->MaxNumSlotsSupported = 0;
    this->SlotBoxWidget = NULL;
    this->SectionNameWidget = NULL;
    this->SectionRewardWidget = NULL;
    this->AssociatedSection = NULL;
}

