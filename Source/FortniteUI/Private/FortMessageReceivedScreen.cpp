#include "FortMessageReceivedScreen.h"


FText UFortMessageReceivedScreen::GetHeaderAssetString(const FString& Param) {
    return FText::GetEmpty();
}

FText UFortMessageReceivedScreen::GetBodyAssetString(const FString& Param) {
    return FText::GetEmpty();
}

UFortMessageReceivedScreen::UFortMessageReceivedScreen() {
    this->GiftBoxItem = NULL;
    this->GiftBoxImage = NULL;
}

