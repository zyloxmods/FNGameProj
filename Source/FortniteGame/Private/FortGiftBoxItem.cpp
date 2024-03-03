#include "FortGiftBoxItem.h"

bool UFortGiftBoxItem::TryGetParamText(const FString& ParamName, FText& OutValue) const {
    return false;
}

bool UFortGiftBoxItem::TryGetParamString(const FString& ParamName, FString& OutValue) const {
    return false;
}

bool UFortGiftBoxItem::TryGetParamInt(const FString& ParamName, int32& OutValue) const {
    return false;
}

UFortItemDefinition* UFortGiftBoxItem::RetrieveItemDefintionFromParam(const FString& ParamName) const {
    return NULL;
}

bool UFortGiftBoxItem::IsVisibleIn(const ESubGame SubGame) const {
    return false;
}

bool UFortGiftBoxItem::HasParam(const FString& ParamName) const {
    return false;
}

bool UFortGiftBoxItem::HasAccountID() const {
    return false;
}

UFortGiftBoxItemDefinition* UFortGiftBoxItem::GetGiftBoxDefinition() const {
    return NULL;
}

FText UFortGiftBoxItem::FormatTextUsingParams(const FText& FormatString) const {
    return FText::GetEmpty();
}

void UFortGiftBoxItem::FilterUserMessageForProfanity(int32 ControllerId, FOnTextFiltered OnTextFiltered) {
}

UFortGiftBoxItem::UFortGiftBoxItem() {
}

