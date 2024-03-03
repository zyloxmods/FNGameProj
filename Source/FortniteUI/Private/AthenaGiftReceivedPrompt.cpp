#include "AthenaGiftReceivedPrompt.h"



void UAthenaGiftReceivedPrompt::HandleMessageTextFiltered(bool bSuccess, const FString& SanitizedMessage) {
}

void UAthenaGiftReceivedPrompt::HandleGiftingComplete() {
}

void UAthenaGiftReceivedPrompt::DismissPrompt() {
}

UAthenaGiftReceivedPrompt::UAthenaGiftReceivedPrompt() {
    this->ItemPresentationScreenClass = NULL;
    this->GiftBoxItem = NULL;
    this->Widget_HeaderInfo = NULL;
    this->Button_Open = NULL;
    this->Image_GiftBox = NULL;
}

