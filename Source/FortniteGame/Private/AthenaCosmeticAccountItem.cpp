#include "AthenaCosmeticAccountItem.h"

bool UAthenaCosmeticAccountItem::HasMultipleVariants() {
    return false;
}

bool UAthenaCosmeticAccountItem::HasCosmeticVariance() const {
    return false;
}

FText UAthenaCosmeticAccountItem::GetLockerItemTypeText() const {
    return FText::GetEmpty();
}

FText UAthenaCosmeticAccountItem::GetLockerDescriptionText() const {
    return FText::GetEmpty();
}

UFortHero* UAthenaCosmeticAccountItem::GetHero() const {
    return NULL;
}

UAthenaCosmeticAccountItem::UAthenaCosmeticAccountItem() {
    Hero = NULL;
}

