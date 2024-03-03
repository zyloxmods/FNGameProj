#include "AthenaCollectionItemToast.h"

void UAthenaCollectionItemToast::HandleMobileClick() {
}

bool UAthenaCollectionItemToast::BPCallableIsDesignTime() const {
    return false;
}



UAthenaCollectionItemToast::UAthenaCollectionItemToast() {
    this->TimeToShowToast = 1;
    this->OpenCollectionScreenInputHoldTime = 1;
    this->ActivationDelay = 1;
    this->Text_ItemNumber = NULL;
    this->Text_ItemName = NULL;
    this->LazyImage_ItemImage = NULL;
    this->Button_MobileClickCatcher = NULL;
}

