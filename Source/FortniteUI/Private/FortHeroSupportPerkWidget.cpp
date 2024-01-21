#include "FortHeroSupportPerkWidget.h"

void UFortHeroSupportPerkWidget::SetSupportTypeToRepresent(const EFortSupportBonusType InSupportTypeToRepresent) {
}

void UFortHeroSupportPerkWidget::SetState(const EFortSupportPerkWidgetState InState) {
}

void UFortHeroSupportPerkWidget::SetHeroToRepresent(const UFortHero* InHeroToRepresent) {
}




bool UFortHeroSupportPerkWidget::IsPerkUnlocked() const {
    return false;
}

bool UFortHeroSupportPerkWidget::IsPerkInCorrectSlot() const {
    return false;
}

bool UFortHeroSupportPerkWidget::IsPerkHighlighted() const {
    return false;
}

bool UFortHeroSupportPerkWidget::IsPerkEmpty() const {
    return false;
}

bool UFortHeroSupportPerkWidget::IsPerkActive() const {
    return false;
}

bool UFortHeroSupportPerkWidget::IsHeroInSupportSlot() const {
    return false;
}

UFortHeroSupportPerkWidget::UFortHeroSupportPerkWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->SupportTypeToRepresent = EFortSupportBonusType::Normal;
    this->SupportPerkWidgetState = EFortSupportPerkWidgetState::Normal;
    this->PerkImage = NULL;
    this->NameText = NULL;
    this->DescriptionText = NULL;
}

